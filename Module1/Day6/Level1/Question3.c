/*
3. Write a program using structures to calculate the difference between two time periods using a user-defined function.
*/
#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time calculateTimeDifference(struct Time startTime, struct Time endTime) {
    struct Time diffTime;

    if (endTime.seconds < startTime.seconds) {
        endTime.seconds += 60;
        endTime.minutes--;
    }

    diffTime.seconds = endTime.seconds - startTime.seconds;

    if (endTime.minutes < startTime.minutes) {
        endTime.minutes += 60;
        endTime.hours--;
    }

    diffTime.minutes = endTime.minutes - startTime.minutes;
    diffTime.hours = endTime.hours - startTime.hours;

    return diffTime;
}

int main() {
    struct Time startTime, endTime, diffTime;

    printf("Enter the start time:\n");
    printf("Hours: ");
    scanf("%d", &(startTime.hours));
    printf("Minutes: ");
    scanf("%d", &(startTime.minutes));
    printf("Seconds: ");
    scanf("%d", &(startTime.seconds));

    printf("\nEnter the end time:\n");
    printf("Hours: ");
    scanf("%d", &(endTime.hours));
    printf("Minutes: ");
    scanf("%d", &(endTime.minutes));
    printf("Seconds: ");
    scanf("%d", &(endTime.seconds));

    diffTime = calculateTimeDifference(startTime, endTime);

    printf("\nTime Difference: %d hours, %d minutes, %d seconds\n",
           diffTime.hours, diffTime.minutes, diffTime.seconds);

    return 0;
}