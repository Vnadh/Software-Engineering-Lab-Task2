#include <stdio.h>
#include "report.h"

void displayReport(struct Student s[], int count) {
    float avg = 0, high = s[0].percentage, low = s[0].percentage;
    int grades[7] = {0};

    printf("\nID\tName\tTotal\tPercent\tGrade\n");
    printf("-------------------------------------------\n");

    for (int i = 0; i < count; i++) {
        printf("%s\t%s\t%d\t%.2f\t%c\n",
               s[i].id, s[i].name,
               s[i].total, s[i].percentage, s[i].grade);

        avg += s[i].percentage;
        if (s[i].percentage > high) high = s[i].percentage;
        if (s[i].percentage < low) low = s[i].percentage;

        switch (s[i].grade) {
            case 'O': grades[0]++; break;
            case 'A': grades[1]++; break;
            case 'B': grades[2]++; break;
            case 'C': grades[3]++; break;
            case 'D': grades[4]++; break;
            case 'E': grades[5]++; break;
            case 'F': grades[6]++; break;
        }
    }

    printf("-------------------------------------------\n");
    printf("Class Avg: %.2f\nHighest: %.2f\nLowest: %.2f\n",
           avg / count, high, low);
}
