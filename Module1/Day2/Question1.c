/* question 1 Day 2
Write a program to print exponent part of double variable in hexadecimal and binary format.
lets say we have x = 0.7, the exponent in hex is 0x3FE and 0b01111111110
You may use the below link to validate you output
https://baseconvert.com/ieee-754-floating-point

Topics to be covered
- Pointers
- Bitwise Operators*/
#include <stdio.h>

int main() {
    double x = 0.7;
    unsigned long long* ptr = (unsigned long long*)&x;
    unsigned long long exponent = (*ptr & 0x7FF0000000000000) >> 52;
    
    printf("Exponent in hex: 0x%llX\n", exponent);
    printf("Exponent in binary: 0b");
    
    for (int i = 51; i >= 0; i--) {
        unsigned long long bit = (exponent >> i) & 1;
        printf("%llu", bit);
    }
    
    printf("\n");
    return 0;

}