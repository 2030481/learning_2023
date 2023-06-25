/*
2. Write a C program that uses functions to perform the following operations: 
     i) Reading a complex number 
     ii) Writing a complex number 
     iii) Addition of two complex numbers 
     iv) Multiplication of two complex numbers 
  (Note: represent complex number using a structure.
*/
#include <stdio.h>

typedef struct {
    float real;
    float imaginary;
} ComplexNumber;

void readComplexNumber(ComplexNumber *complex) {
    printf("Enter the real part: ");
    scanf("%f", &(complex->real));

    printf("Enter the imaginary part: ");
    scanf("%f", &(complex->imaginary));
}

void writeComplexNumber(ComplexNumber complex) {
    if (complex.imaginary >= 0)
        printf("Complex Number: %.2f + %.2fi\n", complex.real, complex.imaginary);
    else
        printf("Complex Number: %.2f - %.2fi\n", complex.real, -complex.imaginary);
}

ComplexNumber addComplexNumbers(ComplexNumber num1, ComplexNumber num2) {
    ComplexNumber result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

ComplexNumber multiplyComplexNumbers(ComplexNumber num1, ComplexNumber num2) {
    ComplexNumber result;
    result.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    result.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);
    return result;
}

int main() {
    ComplexNumber complex1, complex2, sum, product;

    printf("Reading Complex Number 1:\n");
    readComplexNumber(&complex1);

    printf("\nReading Complex Number 2:\n");
    readComplexNumber(&complex2);

    printf("\nComplex Number 1:\n");
    writeComplexNumber(complex1);

    printf("\nComplex Number 2:\n");
    writeComplexNumber(complex2);

    sum = addComplexNumbers(complex1, complex2);
    printf("\nSum of Complex Numbers:\n");
    writeComplexNumber(sum);

    product = multiplyComplexNumbers(complex1, complex2);
    printf("\nProduct of Complex Numbers:\n");
    writeComplexNumber(product);

    return 0;
}