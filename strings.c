#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    // Writeable String
    char name[] = "John Smith";
    char name_set[11] = "John Smith";

    // Example
    char * nama = "Fadlan";
    int umur = 27;
    printf("%s is %d years old. This name has %lu character length\n", nama, umur, strlen(nama));

    // Str Compare
    if (strncmp(nama, "Fadlan", 6) == 0) {
        printf("Hello, Fadlan!\n");
    } else {
        printf("You are not Fadlan. Go away.\n");
    }

    // Str Concat
    char dest[20]="Hello";
    char src[20]="World";
    
    // Concat 3 Alphabet from src
    strncat(dest,src,3);
    printf("%s\n",dest);

    // Concat all
    strncat(dest,src,20);
    printf("%s\n",dest);

    // Lesson
    char * first_name = "John";
    char last_name[] = "Doe";
    char lesson_name[100];

    last_name[0] = 'B';
    sprintf(lesson_name, "%s %s", first_name, last_name);
    if (strncmp(lesson_name, "John Boe", 100) == 0) {
        printf("Done!\n");
    }
    lesson_name[0]='\0';
    strncat(lesson_name,first_name,4);
    strncat(lesson_name,last_name,20);
    printf("%s\n",lesson_name);

    return 0;
}