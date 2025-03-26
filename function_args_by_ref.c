#include <stdio.h>

void addone(int n) {
    // n is local variable which only exists within the function scope
    n++; // therefore incrementing it has no effect
}

void addonefix(int *n) {
    (*n)++;
}

typedef struct
{
    int x, y;
} point;

void multiply_struct(point *p, int multipled_by){
    // 2 Struct Pointer Handler
    (*p).x *= multipled_by;
    p->y *= multipled_by;
}

typedef struct {
    char * name;
    int age;
} person;

void birthday(person * p) {
    p->age++;
}

int main() {
    int n = 1;
    printf("Before: %d\n", n);
    addonefix(&n);
    printf("After: %d\n", n);

    // Struct Pointers
    point p;
    p.x = 10;
    p.y = 25;
    printf("Before Struct: %d, %d\n", p.x, p.y);
    multiply_struct(&p, 2);
    printf("After Struct: %d, %d\n", p.x, p.y);

    // Lesson (Birthday)
    person john;
    john.name = "John";
    john.age = 27;

    printf("%s is %d years old.\n", john.name, john.age);
    birthday(&john);
    printf("Happy birthday! %s is now %d years old.\n", john.name, john.age);

    return 0;
}