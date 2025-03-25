#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("%d\n", i);
    }

    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int sum = 0;

    for (i = 0; i < 10; i++) {
        sum += array[i];
    }

    /* sum now contains a[0] + a[1] + ... + a[9] */
    printf("Sum of the array is %d\n", sum);

    // Lesson
    int factorial = 1;

    /* calculate the factorial using a for loop  here*/
    for (i = 0; i < (sizeof(array) / sizeof(array[0])); i++) {
        factorial *= array[i];
    }
    printf("10! is %d.\n", factorial);

    return 0;
}