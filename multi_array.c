#include <stdio.h>

int main() {
    char vowels[1][5] = {
        {'a', 'i', 'u', 'e', 'o'}
    };

    char vowels_unset[][5] = {
        {'A', 'E', 'I', 'O', 'U'},
        {'a', 'e', 'i', 'o', 'u'}
    };

    int matrix[3][4] = {  
        {0, 1, 2, 3} ,   /*  initializers for row indexed by 0 */
        {4, 5, 6, 7} ,   /*  initializers for row indexed by 1 */
        {8, 9, 10, 11}   /*  initializers for row indexed by 2 */
    };

    // Lesson
    /* TODO: declare the 2D array grades here */
    int grades[2][5];
    float average;
    int i;
    int j;

    grades[0][0] = 80;
    grades[0][1] = 70;
    grades[0][2] = 65;
    grades[0][3] = 89;
    grades[0][4] = 90;

    grades[1][0] = 85;
    grades[1][1] = 80;
    grades[1][2] = 80;
    grades[1][3] = 82;
    grades[1][4] = 87;

    // Array Length
    int first_length = sizeof(grades) / sizeof(grades[0]);

    /* TODO: complete the for loop with appropriate terminating conditions */
    for (i = 0; i < first_length; i++) {
        average = 0;
        int second_length = sizeof(grades[i]) / sizeof(grades[i][0]);
        for (j = 0; j < second_length; j++) {
            average += grades[i][j];
        }

        /* TODO: compute the average marks for subject i */
        average /= 5.0;
        printf("The average marks obtained in subject %d is: %.2f\n", i, average);
    }

    return 0;
}