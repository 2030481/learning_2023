#include <stdio.h>
#include <math.h>

int binaryToDecimal(int binary[], int size) {
    int decimal = 0;
    int base = 1;
    for (int i = size - 1; i >= 0; i--) {
        decimal += binary[i] * base;
        base *= 2;
    }
    return decimal;
}

int octalToDecimal(int octal[], int size) {
    int decimal = 0;
    int base = 1;
    for (int i = size - 1; i >= 0; i--) {
        decimal += octal[i] * base;
        base *= 8;
    }
    return decimal;
}

int hexToDecimal(char hex[], int size) {
    int decimal = 0;
    int base = 1;
    for (int i = size - 1; i >= 0; i--) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            decimal += (hex[i] - '0') * base;
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            decimal += (hex[i] - 'A' + 10) * base;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            decimal += (hex[i] - 'a' + 10) * base;
        }
        base *= 16;
    }
    return decimal;
}

int main() {
    int binary[] = {1, 1, 1, 0, 1}; 
    int octal[] = {1, 5, 3, 2};     
    char hex[] = "35Z";        

    int binarySize = sizeof(binary) / sizeof(binary[0]);
    int octalSize = sizeof(octal) / sizeof(octal[0]);
    int hexSize = sizeof(hex) / sizeof(hex[0]);

    int binaryDecimal = binaryToDecimal(binary, binarySize);
    int octalDecimal = octalToDecimal(octal, octalSize);
    int hexDecimal = hexToDecimal(hex, hexSize - 1);

    printf("Binary to Decimal: %d\n", binaryDecimal);
    printf("Octal to Decimal: %d\n", octalDecimal);
    printf("Hexadecimal to Decimal: %d\n", hexDecimal);

    return 0;
}