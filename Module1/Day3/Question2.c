/*
 Prints Bits:
Scan a 32bit integer and prints its bits.

Concepts to be used.
- Loops
- Bitwise Operators
*/
#include <stdio.h>

void printBits(int num);

int main() {
    int num = 16;

    printf("Enter a 32-bit integer: ");
    //scanf("%d", &num);

    printf("Bits of the integer: ");
    printBits(num);

    return 0;
}

void printBits(int num) {
    int i;
    unsigned int mask = 1 << 31;  // Start with the leftmost bit

    for (i = 0; i < 32; i++) {
        int bit = (num & mask) != 0;  // Check if the current bit is 1 or 0
        printf("%d", bit);
        mask >>= 1;  // Move the mask to the right
    }

    printf("\n");
}