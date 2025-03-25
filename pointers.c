#include <stdio.h>

int main() {
    /* define a local variable a */
    int a = 1;

    /* define a pointer variable, and point it to a using the & operator */
    int * pointer_to_a = &a;

    printf("The value a is %d\n", a);
    printf("The value of a is also %d\n", *pointer_to_a);

    // Pointer Add, the result is 2 in both variable because its referencing the memory address
    *pointer_to_a += 1;

    printf("After add, The value a is %d\n", a);
    printf("After add, The value of a is also %d\n", *pointer_to_a);

    // Lesson, Add Pointers
    int n = 10;
    int * pointer_to_n = &n;
    *pointer_to_n += 1;

    /* testing code */
    if (pointer_to_n != &n) return 1;
    if (*pointer_to_n != 11) return 1;

    printf("Done!\n");

    return 0;
}