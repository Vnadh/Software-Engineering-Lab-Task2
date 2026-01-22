#include "computation.h"

void computeResults(struct Student *s) {
    s->total = 0;
    for (int i = 0; i < SUBJECTS; i++)
        s->total += s->marks[i];

    s->percentage = s->total / (float)SUBJECTS;
    s->grade = calculateGrade(s->percentage);
}

char calculateGrade(float p) {
    if (p >= 90) return 'O';
    else if (p >= 85) return 'A';
    else if (p >= 75) return 'B';
    else if (p >= 65) return 'C';
    else if (p >= 55) return 'D';
    else if (p >= 50) return 'E';
    else return 'F';
}
