#include <stdio.h>
#include "student.h"
#include "validation.h"
#include "computation.h"
#include "report.h"

int main() {
    FILE *fp = fopen("students.txt", "r");
    struct Student students[MAX];
    int count = 0;

    if (!fp) {
        printf("File not found\n");
        return 1;
    }

    while (fscanf(fp, "%s %s",
                  students[count].id,
                  students[count].name) != EOF) {

        for (int i = 0; i < SUBJECTS; i++)
            fscanf(fp, "%d", &students[count].marks[i]);

        if (!isValidID(students[count].id, students, count) ||
            !isValidName(students[count].name) ||
            !isValidMarks(students[count].marks))
            continue;

        computeResults(&students[count]);
        count++;
    }

    fclose(fp);
    displayReport(students, count);
    return 0;
}
