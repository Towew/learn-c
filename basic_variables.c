#include <stdio.h>

int main() {
    // Basic Variable String
    char _words[] = "Fadlan";

    // Basic Variable Int
    short int nomor = -128;
    int nomor_mid = 2000000000;
    long nomor_panjang = 9223372036854775800;
    unsigned int nomor_non_negative = -90;

    // Float
    float desimal = 1.0;
    double desimal_alt = 1.00;

    // Booleans
    #define BOOL char
    #define FALSE 0
    #define TRUE 1
    BOOL true = TRUE;
    BOOL false = FALSE;
    printf("%d", true);
}