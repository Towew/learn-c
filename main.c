#include <stdio.h>
#include <string.h>

int main(void) {
    // Defining Variables
    short int umur = 15;

    // String is array of char
    char nama[] = "Fadlan";
    char namatamu[20];

    // String Get and Set in terminal
    printf("Nama Saya adalah %s dan saya berumur %hd tahun\n", nama, umur);
    
    printf("Siapa nama anda?\n");

    // ampersand (&) for pointers
    scanf("%19s", &namatamu);

    printf("Oh baik salam kenal, %s\n", namatamu);

    // Constants best practices are in upper variables
    const short int SIZE_NUMBER = 5;
    printf("Ukuran sepatu anda adalah %hd\n", SIZE_NUMBER);

    short int sepatu_saya = SIZE_NUMBER + 5;
    printf("Tapi Ukuran sepatu saya adalah %hd\n", sepatu_saya);

    // if else
    char jawaban[4];
    char text[9];
    printf("Anda suka bakso ngga?\n");
    scanf("%3s", &jawaban);
    if (strcmp(jawaban, "Yes") == 0) {
        strcpy(text, "Mantapss");
    } else if (strcmp(jawaban, "No") == 0) {
        strcpy(text, "Yahhh");
    } else {
        strcpy(text, "Kocag");
    }
    printf("%s\n", text);

    // loop
    const short int MAX_LOOP = 5;
    short int init = 1;
    while (init < MAX_LOOP)
    {
        printf("Yeyyyy %hd\n", init);
        init++;
    }

    return 0;
}