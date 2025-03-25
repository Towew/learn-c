#include <stdio.h>

// Function Declaration for Lazy Use of Function
int add(int param, int reducer);
void void_func();
void print_big(int number);

int main() {
    int a = 5, b = 7;
    printf("Hasil dari penjumlahan %d + %d adalah %d\n", a, b, add(a, b));

    void_func();

    // Lesson
    // Print Bigger than 0
    int array[] = { 1, 11, 2, 22, 3, 33 };
    int i;
    for (i = 0; i < 6; i++) {
        print_big(array[i]);
    }

    return 0;
}

int add(int param, int reducer) {
    return param + reducer;
}

void void_func() {
    printf("Void\n\n");
}

void print_big(int number) {
    if (number > 10) {
        printf("%d is big\n",number);
    }
}