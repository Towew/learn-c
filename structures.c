#include <stdio.h>

// Default Struct
struct point
{
    int x;
    int y;
};

// Struct Typing
typedef struct {
    char * type;
    int model;
} Car;

typedef struct 
{
    char * name;
    int age;
} person;


int main() {
    // Define Struct
    struct point p;
    p.x = 10;
    p.y = 12;

    // Define Car
    Car c;
    c.type = "Ford";
    c.model = 2000;

    // Lesson (Person Struct)
    person john;

    /* testing code */
    john.name = "John";
    john.age = 27;
    printf("%s is %d years old.", john.name, john.age);

    return 0;
}