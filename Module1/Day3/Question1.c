/*
Patern Generator:
Write a program to print the given pattern below using 3 functions (1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 3rd to accept the n and print from n to 1)
1234554321
1234    4321
123        321
12            21
1                1

Concepts to be used.
- Loops*/

#include <stdio.h>

void printNumbers(int n);
void printSpaces(int n);
void printPattern(int n);

int main() {
    int n = 5;

    printf("Enter the number of rows:\n ");
    //scanf("%d", &n);

    printPattern(n);

    return 0;
}

void printNumbers(int n) {
    int i;
    for (i = 1; i <= n; i++) {
        printf("%d", i);
    }
}

void printSpaces(int n) {
    int i;
    for (i = 1; i <= 2 * n - 3; i++) {
        printf(" ");
    }
}

void printPattern(int n) {
    int i;
    for (i = n; i >= 1; i--) {
        printNumbers(i);

        if (i != 1) {
            printSpaces(i);
        }

        if (i != n) {
            printNumbers(i);
        }

        printf("\n");
    }
}