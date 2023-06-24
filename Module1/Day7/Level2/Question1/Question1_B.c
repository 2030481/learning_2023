#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int entryNo;
    char sensorNo[10];
    float temperature;
    int humidity;
    int light;
    char timestamp[10];
} LogEntry;

LogEntry logEntries[10];
int numLogEntries = 0;

void extractLogEntries(const char *filename) {
    FILE *file = fopen("C:/Users/shruti/OneDrive/Documents/data.csv", "r");
    if (file == NULL) {
        printf("Unable to open the file\n");
        return;
    }

    char line[256];
    fgets(line, sizeof(line), file);

    while (fgets(line, sizeof(line), file) != NULL) {
        LogEntry entry;
        sscanf(line, "%d,%[^,],%f,%d,%d,%[^,]",
               &entry.entryNo, entry.sensorNo, &entry.temperature,
               &entry.humidity, &entry.light, entry.timestamp);
        logEntries[numLogEntries++] = entry;
    }

    fclose(file);
}

int compareLogEntries(const void *a, const void *b) {
    float tempA = ((LogEntry *)a)->temperature;
    float tempB = ((LogEntry *)b)->temperature;

    if (tempA < tempB)
        return 1;
    else if (tempA > tempB)
        return -1;
    else
        return 0;
}

void sortLogEntries() {
    qsort(logEntries, numLogEntries, sizeof(LogEntry), compareLogEntries);
}

void writeSortedLogEntries(const char *filename) {
    FILE *file = fopen("C:/Users/shruti/OneDrive/Documents/data.csv", "w");
    if (file == NULL) {
        printf("Unable to create the file\n");
        return;
    }

    fprintf(file, "EntryNo,SensorNo,Temperature,Humidity,Light,Timestamp\n");

    for (int i = 0; i < numLogEntries; i++) {
        LogEntry entry = logEntries[i];
        fprintf(file, "%d,%s,%.1f,%d,%d,%s\n",
                entry.entryNo, entry.sensorNo, entry.temperature,
                entry.humidity, entry.light, entry.timestamp);
    }

    fclose(file);
}

int main() {
    const char *filename = "data.csv";

    extractLogEntries(filename);
    sortLogEntries();
    writeSortedLogEntries(filename);

    printf("Sorting completed successfully.\n");

    return 0;
}