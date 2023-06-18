#include <stdio.h>

// Function to convert decimal to binary
void decimalToBinary(int decimal, int binary[], int *size) {
    int index = 0;
    while (decimal > 0) {
        binary[index++] = decimal % 2;
        decimal /= 2;
    }
    *size = index;
}

// Function to convert decimal to octal
void decimalToOctal(int decimal, int octal[], int *size) {
    int index = 0;
    while (decimal > 0) {
        octal[index++] = decimal % 8;
        decimal /= 8;
    }
    *size = index;
}

// Function to convert decimal to hexadecimal
void decimalToHex(int decimal, char hex[], int *size) {
    int index = 0;
    while (decimal > 0) {
        int remainder = decimal % 16;
        if (remainder < 10) {
            hex[index++] = remainder + '0';
        } else {
            hex[index++] = remainder - 10 + 'A';
        }
        decimal /= 16;
    }
    *size = index;
}

int main() {
    int decimal = 858; // Decimal number

    int binary[32];    // Binary array
    int octal[32];     // Octal array
    char hex[32];      // Hexadecimal array

    int binarySize, octalSize, hexSize;

    decimalToBinary(decimal, binary, &binarySize);
    decimalToOctal(decimal, octal, &octalSize);
    decimalToHex(decimal, hex, &hexSize);

    printf("Decimal to Binary: ");
    for (int i = binarySize - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }
    printf("\n");

    printf("Decimal to Octal: ");
    for (int i = octalSize - 1; i >= 0; i--) {
        printf("%d", octal[i]);
    }
    printf("\n");

    printf("Decimal to Hexadecimal: ");
    for (int i = hexSize - 1; i >= 0; i--) {
        printf("%c", hex[i]);
    }
    printf("\n");

    return 0;
}