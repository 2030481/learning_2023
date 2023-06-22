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

void displayLogEntries() {

    printf("EntryNo   SensorNo   Temperature   Humidity   Light   Timestamp\n");

    for (int i = 0; i < numLogEntries; i++) {
        LogEntry entry = logEntries[i];
        printf("%-9d %-10s %-13.1f %-9d %-7d %-s\n",
               entry.entryNo, entry.sensorNo, entry.temperature,
               entry.humidity, entry.light, entry.timestamp);
    }
}

int main() {
    const char *filename = "data.csv";
    extractLogEntries(filename);
    displayLogEntries();
    return 0;
}