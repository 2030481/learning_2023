#include <stdio.h>
#include <stdlib.h>

int computeTotalSeconds(char* timeString) {
    int hours, minutes, seconds;
    sscanf(timeString, "%d:%d:%d", &hours, &minutes, &seconds);
    
    int totalSeconds = (hours * 3600) + (minutes * 60) + seconds;
    return totalSeconds;
}

int main() {
    char timeString[] = "10:12:50"; // Example time string
    
    int totalSeconds = computeTotalSeconds(timeString);

    printf("Time string: %s\n", timeString);
    printf("Total seconds: %d\n", totalSeconds);

    return 0;
}
