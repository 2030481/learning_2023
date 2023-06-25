/*
2. Write a C program that uses functions to perform the following operations: 
     i) Reading a complex number 
     ii) Writing a complex number 
     iii) Addition of two complex numbers 
     iv) Multiplication of two complex numbers 
  (Note: represent complex number using a structure.
*/
#include <stdio.h>

struct Box {
    double length;
    double width;
    double height;
};

double calculateVolume(struct Box *boxPtr) {
    return boxPtr->length * boxPtr->width * boxPtr->height;
}

double calculateSurfaceArea(struct Box *boxPtr) {
    double topBottom = 2 * (boxPtr->length * boxPtr->width);
    double frontBack = 2 * (boxPtr->length * boxPtr->height);
    double sides = 2 * (boxPtr->width * boxPtr->height);
    return topBottom + frontBack + sides;
}

int main() {
    struct Box myBox;
    struct Box *boxPtr;

    boxPtr = &myBox;


    printf("Enter the length of the box: ");
    scanf("%lf", &(boxPtr->length));

    printf("Enter the width of the box: ");
    scanf("%lf", &(boxPtr->width));

    printf("Enter the height of the box: ");
    scanf("%lf", &(boxPtr->height));

  
    double volume = calculateVolume(boxPtr);
    double surfaceArea = calculateSurfaceArea(boxPtr);


    printf("The volume of the box is: %lf\n", volume);
    printf("The total surface area of the box is: %lf\n", surfaceArea);

    return 0;
}