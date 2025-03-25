#include <stdio.h>

int main () {
    int array_of_numbers[10];
    array_of_numbers[5] = 60;
    printf("The 6th number in the array is %d\n", array_of_numbers[5]);

    char words[7] = "Aladdin";
    printf("The 6th number in the array is %d\n", words[5]);

     /* TODO: define the missing grade
     so that the average will sum to 85. */
    int average;
    int grades[3];

    grades[0] = 80;
    grades[1] = 85;
    grades[2] = 90;

    average = (grades[0] + grades[1] + grades[2]) / 3;
    printf("The average of the 3 grades is: %d\n", average);

    return 0;
}