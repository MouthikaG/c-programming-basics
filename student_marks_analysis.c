#include <stdio.h>
#define STUDENTS 10
#define SUBJECTS 3
int main() {
    int marks[STUDENTS][SUBJECTS];
    float averages[STUDENTS];
    int minIndex[STUDENTS];
    int countAbove50[STUDENTS];
    int countCentum[STUDENTS];

    printf("Enter the marks for %d students in %d subjects:\n", STUDENTS, SUBJECTS);
    for (int i = 0; i < STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        for (int j = 0; j < SUBJECTS; j++) {
            printf("Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }

    for (int i = 0; i < STUDENTS; i++) {
        int sum = 0;
        int minMark = marks[i][0];
        minIndex[i] = 0;  
        countAbove50[i] = 0;
        countCentum[i] = 0;

        for (int j = 0; j < SUBJECTS; j++) {
            sum += marks[i][j];  
            if (marks[i][j] < minMark) {
                minMark = marks[i][j];
                minIndex[i] = j;  
            }
            if (marks[i][j] > 50) {
                countAbove50[i]++;  
            }
            if (marks[i][j] == 100) {
                countCentum[i]++;  
            }
        }

        averages[i] = (float)sum / SUBJECTS; 
    }

    printf("\nResults:\n");
    for (int i = 0; i < STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Average Marks: %.2f\n", averages[i]);
        printf("  Minimum Mark in Subject Index: %d\n", minIndex[i]);
        printf("  Number of Subjects > 50: %d\n", countAbove50[i]);
        printf("  Number of Centum Scored: %d\n", countCentum[i]);
    }

    return 0;
}

