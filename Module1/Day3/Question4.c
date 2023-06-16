/*
Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986

Concepts to be used.
- Loops
- Operators*/
#include <stdio.h>

void findLargestNumber(int num);

int main() {
    int num = 9856;

    printf("Enter a 4-digit number: ");
    //scanf("%d", &num);

    //int largestNumber = findLargestNumber(num);

    //printf("Largest number after deleting a digit: %d\n", findLargestNumber());
    findLargestNumber(num);
    return 0;
}

void findLargestNumber(int num) {

    int largestNum = 0;
    int secondlargestNum = 0;
    int thirdlargestNum = 0;
    int k = num;
    int l = num;
    int j = num;
    while(k>0){
        int m = k % 10;
        k = k/10;
        if(m > largestNum){
            largestNum = m;
        }
    }
    while(l>0){
        int m = l % 10;
        l = l/10;
        if(m > secondlargestNum && m < largestNum){
            secondlargestNum = m;
        }
    }
    while(j>0){
        int m = j % 10;
        j = j/10;
        if(m > thirdlargestNum && m < secondlargestNum){
            thirdlargestNum = m;
        }
    }

    printf("%d%d%d",largestNum, secondlargestNum, thirdlargestNum);
}