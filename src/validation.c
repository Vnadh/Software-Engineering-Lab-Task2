#include <string.h>
#include <ctype.h>
#include "validation.h"

int isValidID(char id[], struct Student s[], int count) {
    for (int i = 0; id[i]; i++)
        if (!isalnum(id[i])) return 0;

    for (int i = 0; i < count; i++)
        if (strcmp(id, s[i].id) == 0) return 0;

    return 1;
}

int isValidName(char name[]) {
    for (int i = 0; name[i]; i++)
        if (!isalpha(name[i])) return 0;
    return 1;
}

int isValidMarks(int marks[]) {
    for (int i = 0; i < SUBJECTS; i++)
        if (marks[i] < 0 || marks[i] > 100) return 0;
    return 1;
}
