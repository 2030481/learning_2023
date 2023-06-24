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

void writeLogEntries(const char *filename) {
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
    const char *filename = "C:/Users/shruti/OneDrive/Documents/data.csv";

    extractLogEntries(filename);

    int entryNo;
    printf("Enter the EntryNo: ");
    scanf("%d", &entryNo);

    int found = 0;
    for (int i = 0; i < numLogEntries; i++) {
        if (logEntries[i].entryNo == entryNo) {
            found = 1;
            printf("SensorNo: ");
            scanf("%s", logEntries[i].sensorNo);
            printf("Temperature: ");
            scanf("%f", &logEntries[i].temperature);
            printf("Humidity: ");
            scanf("%d", &logEntries[i].humidity);
            printf("Light: ");
            scanf("%d", &logEntries[i].light);
            printf("Timestamp: ");
            scanf("%s", logEntries[i].timestamp);

            break;
        }
    }

    if (found) {
        writeLogEntries(filename);
        printf("EntryNo %d updated successfully.\n", entryNo);
    } else {
        printf("EntryNo %d not found.\n", entryNo);
    }

    return 0;
}