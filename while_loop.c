#include <stdio.h>

int main() {
    int n = 0;
    while (1) {
        n++;
        if (n == 10) {
            printf("While Loop Break!\n");
            break;
        }
    }

    // Lesson
    // If Value less than 5 don't print
    // If Value is greater than 10 stop the loop
    int array[] = {1, 7, 4, 5, 9, 3, 5, 11, 6, 3, 4};
    int i = 0;

    while (i < 10) {
        /* your code goes here */
        if (array[i] < 5) {
            i++;
            continue;
        }

        if (array[i] > 10) {
            break;
        }
        
        printf("%d\n", array[i]);
        i++;
    }

    return 0;
}