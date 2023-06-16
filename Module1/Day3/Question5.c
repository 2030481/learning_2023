/*
Write a program to find both smallest and largest digits in given n numbers
For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5
*/
#include <stdio.h>

void findSmallestAndLargestDigits(int n, int numbers[]);

int main() {
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);

    int numbers[n];

    printf("Enter %d numbers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    findSmallestAndLargestDigits(n, numbers);

    return 0;
}

void findSmallestAndLargestDigits(int n, int numbers[]) {
    int smallestDigit = 9;
    int largestDigit = 0;

    for (int i = 0; i < n; i++) {
        int tempNum = numbers[i];

        while (tempNum > 0) {
            int digit = tempNum % 10;  
            if (digit < smallestDigit) {
                smallestDigit = digit;
            }

            if (digit > largestDigit) {
                largestDigit = digit;
            }

            tempNum /= 10;  
        }
    }

    if (smallestDigit == 9 && largestDigit == 0) {
        printf("Not Valid\n");
    } else {
        printf("Smallest digit: %d\n", smallestDigit);
        printf("Largest digit: %d\n", largestDigit);
    }
}