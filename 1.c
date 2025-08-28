#include <stdio.h>
#define STUDENTS 20
#define SUBJECTS 5

int main() {
    int MARKS[STUDENTS][SUBJECTS];
    int i, j, below50 = 0;
    float subAvg[SUBJECTS] = {0}, stuAvg[STUDENTS] = {0};

    // Input marks
    printf("Enter marks of %d students in %d subjects:\n", STUDENTS, SUBJECTS);
    for (i = 0; i < STUDENTS; i++) {
        for (j = 0; j < SUBJECTS; j++) {
            scanf("%d", &MARKS[i][j]);
            subAvg[j] += MARKS[i][j];
            stuAvg[i] += MARKS[i][j];
        }
    }

    // (a) Average per subject
    printf("\nAverage marks in each subject:\n");
    for (j = 0; j < SUBJECTS; j++) {
        subAvg[j] /= STUDENTS;
        printf("Subject %d: %.2f\n", j + 1, subAvg[j]);
    }

    // (b) Average per student + (c) below 50
    printf("\nAverage marks of each student:\n");
    for (i = 0; i < STUDENTS; i++) {
        stuAvg[i] /= SUBJECTS;
        printf("Student %d: %.2f\n", i + 1, stuAvg[i]);
        if (stuAvg[i] < 50) below50++;
    }
    printf("\nNumber of students with average < 50: %d\n", below50);

    // (d) Display scores
    printf("\nMarks of each student:\n");
    for (i = 0; i < STUDENTS; i++) {
        printf("Student %d: ", i + 1);
        for (j = 0; j < SUBJECTS; j++)
            printf("%d ", MARKS[i][j]);
        printf("\n");
    }

    return 0;
}
