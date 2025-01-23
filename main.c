#include <stdio.h>

int main(void) {
    // Defining Variables
    short int umur = 15;
    char nama[] = "Fadlan";
    char namatamu[20];

    // String Get and Set in terminal
    printf("Nama Saya adalah %s dan saya berumur %hd tahun\n", nama, umur);
    
    printf("Siapa nama anda?\n");
    scanf("%19s", &namatamu);

    printf("Oh baik salam kenal, %s\n", namatamu);
}