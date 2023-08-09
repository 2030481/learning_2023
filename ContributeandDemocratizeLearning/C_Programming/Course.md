# Introduction to Programming
## Introduction to Programming
Understand the fundamentals of programming, which apply to virtually all languages.

## Setting Up Your Environment
* Install a Text Editor or IDE:*
Choose a code editor like Visual Studio Code, Sublime Text, or an integrated development environment (IDE) like Code::Blocks or Dev-C++.

* Install a Compiler:
Install GCC (GNU Compiler Collection) to compile and run C programs.

## Your First C Program
Hello World:
Create a basic "Hello, World!" program to ensure your setup is working.

C Program Code
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}


## Variables and Data Types
#### Data Types:
Learn about basic data types like int, float, char, double.

#### Declaring Variables:
Declare variables and assign values to them.


C Program Code
int age = 25;
float pi = 3.14159;
char grade = 'A';


 ## Input and Output
#### Output with printf():
Print text and variables using printf().


C Program Code
int num = 42;
printf("The answer is: %d\n", num);

#### Input with scanf():
Read input from the user using scanf().


C Program Code
int userInput;
printf("Enter a number: ");
scanf("%d", &userInput);
printf("You entered: %d\n", userInput);


## Control Structures
#### Conditional Statements (if, else):
Make decisions based on conditions.


C Program Code
int x = 10;
if (x > 5) {
    printf("x is greater than 5\n");
} else {
    printf("x is not greater than 5\n");
}

#### Loops (for, while):
Create loops to execute code repeatedly.


C Program Code
for (int i = 1; i <= 5; i++) {
    printf("%d ", i);
}
// Output: 1 2 3 4 5

int n = 5;
while (n > 0) {
    printf("%d ", n);
    n--;
}
// Output: 5 4 3 2 1
 

## Functions and Modular Programming
#### Functions:
*Define and call functions to organize your code.


C Program Code
int add(int a, int b) {
    return a + b;
}

int result = add(3, 5);
printf("Result: %d\n", result);
#### Scope and Lifetime:
Understand variable scope and lifetime (local and global variables).

## Arrays and Pointers
#### Arrays:
Understand and work with arrays, which are collections of elements of the same data type.


C Program Code
int numbers[5] = {1, 2, 3, 4, 5};
printf("Third element: %d\n", numbers[2]); // Output: 3

#### Pointers:
Learn about pointers, which store memory addresses, and their use.


C Program Code
int x = 10;
int *ptr = &x; // Pointer to integer
printf("Value of x: %d\n", *ptr); // Output: 10



 ## Memory Management and Dynamic Allocation
#### Dynamic Memory Allocation (malloc, free):
Allocate memory dynamically for data structures like arrays.

C Program Code
int *dynamicArray = (int *)malloc(5 * sizeof(int));
// Use dynamicArray
free(dynamicArray);


 ## Structures and Unions
#### Structures:
Define and use structures to group related variables together.

C Program Code
struct Person {
    char name[50];
    int age;
};

struct Person person1;
person1.age = 25;
strcpy(person1.name, "John");


## File Handling
#### File I/O:
Learn how to work with files using FILE pointers and functions like fopen, fclose, fprintf, fscanf.

C Program Code
FILE *file = fopen("data.txt", "w");
fprintf(file, "Hello, File Handling!");
fclose(file);


## Advanced Topics (Optional)
#### Enums:
Create enumerated types to define sets of named integer constants.

#### Bitwise Operators:
Learn about bitwise operations to manipulate individual bits of variables.


## Practice and Projects
#### Coding Exercises:
Practice solving coding exercises to solidify your understanding.

#### Small Projects:
Create small programs or projects to apply your knowledge to real-world scenarios.



## Resources and Further Learning
#### Online Tutorials and Courses:
Utilize websites, tutorials, and video courses to deepen your understanding.

#### Programming Communities:
Join forums and communities to ask questions and share your progress.

