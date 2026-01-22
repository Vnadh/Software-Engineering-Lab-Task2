#ifndef STUDENT_H
#define STUDENT_H

#define MAX 100
#define SUBJECTS 5

struct Student {
    char id[20];
    char name[50];
    int marks[SUBJECTS];
    int total;
    float percentage;
    char grade;
};

#endif
