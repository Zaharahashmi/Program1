#include <stdio.h>
int main() {
    int totalHours, no_of_days, no_of_workers;
    printf("Enter total number of hours needed: ");
    scanf("%d", &totalHours);
    printf("Enter number of days: ");
    scanf("%d", &no_of_days);
    printf("Enter number of workers: ");
    scanf("%d", &no_of_workers);
    int normalWorkingHours = 8;
    int trainingDaysPercent = 10;
    int overtimeHours = 2;
    int trainingDays = no_of_days * trainingDaysPercent / 100;
    int totalAvailableDays = no_of_days - trainingDays;
    int totalAvailableHours = totalAvailableDays * no_of_workers * (normalWorkingHours + overtimeHours);
    if (totalAvailableHours >= totalHours) {
        int hoursLeft = totalAvailableHours - totalHours;
        printf("Yes! %d hours left.\n", hoursLeft);
    } else {
        int additionalHoursNeeded = totalHours - totalAvailableHours;
        printf("Not enough time! %d hours needed.\n", additionalHoursNeeded);
    }
    return 0;
}