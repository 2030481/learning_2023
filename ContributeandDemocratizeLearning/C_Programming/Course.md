# Introduction to C Programming
## Introduction to C Programming
* C is a widely used programming language known for its efficiency and close-to-hardware capabilities. It's used in various applications, ranging from system programming to application development.


## Setting Up Your Environment
* Install a Text Editor or IDE:*
Choose a code editor like Visual Studio Code, Sublime Text, or an integrated development environment (IDE) like Code::Blocks or Dev-C++.

* Install a Compiler:
Install GCC (GNU Compiler Collection) to compile and run C programs.

## Your First C Program
Hello World:
* Create a basic "Hello, World!" program to ensure your setup is working.

*C Program Code*

```c
 #include <stdio.h>

int main() {

    printf("Hello, World!\n");

    return 0;

}
```


## Variables and Data Types
#### Data Types:
* Learn about basic data types like int, float, char, double.

#### Declaring Variables:
* Declare variables and assign values to them.


*C Program Code*
```c
int age = 25;
float pi = 3.14159;
char grade = 'A';
```


 ## Input and Output
#### Output with printf():
* Print text and variables using printf().


*C Program Code*
```c
int num = 42;
printf("The answer is: %d\n", num);
```
#### Input with scanf():
* Read input from the user using scanf().


*C Program Code*
```c
int userInput;
printf("Enter a number: ");
scanf("%d", &userInput);
printf("You entered: %d\n", userInput);
```

## Control Structures
#### Conditional Statements (if, else):
* Make decisions based on conditions.


*C Program Code*
```c
 int x = 10;
if (x > 5) {
    printf("x is greater than 5\n");
} else {
    printf("x is not greater than 5\n");
}
```
#### Loops (for, while):
* Create loops to execute code repeatedly.


*C Program Code*
```c
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
 ```

## Functions and Modular Programming
#### Functions:
* Define and call functions to organize your code.


*C Program Code*
```c
int add(int a, int b) {
    return a + b;
}

int result = add(3, 5);
printf("Result: %d\n", result);
```

#### Scope and Lifetime:
* Understand variable scope and lifetime (local and global variables).

## Arrays and Pointers
#### Arrays:
* Understand and work with arrays, which are collections of elements of the same data type.


*C Program Code*
```c
int numbers[5] = {1, 2, 3, 4, 5};
printf("Third element: %d\n", numbers[2]); // Output: 3
```

#### Pointers:
* Learn about pointers, which store memory addresses, and their use.


*C Program Code*
```c
int x = 10;
int *ptr = &x; // Pointer to integer
printf("Value of x: %d\n", *ptr); // Output: 10
```


 ## Memory Management and Dynamic Allocation
#### Dynamic Memory Allocation (malloc, free):
* Allocate memory dynamically for data structures like arrays.

*C Program Code*

```c
 int *dynamicArray = (int *)malloc(5 * sizeof(int));
// Use dynamicArray
free(dynamicArray);
```

 ## Structures and Unions
#### Structures:
* Define and use structures to group related variables together.

*C Program Code*
```c
 struct Person {
    char name[50];
    int age;
};

struct Person person1;
person1.age = 25;
strcpy(person1.name, "John");
```

## File Handling
#### File I/O:
* Learn how to work with files using FILE pointers and functions like fopen, fclose, fprintf, fscanf.

*C Program Code*
```c
 FILE *file = fopen("data.txt", "w");
fprintf(file, "Hello, File Handling!");
fclose(file);
```

## Advanced Topics (Optional)
#### Enums:
* Create enumerated types to define sets of named integer constants.

#### Bitwise Operators:
* Learn about bitwise operations to manipulate individual bits of variables.


## Practice and Projects
#### Coding Exercises:
* Practice solving coding exercises to solidify your understanding.

#### Small Projects:
* Create small programs or projects to apply your knowledge to real-world scenarios.



## Resources and Further Learning
#### Online Tutorials and Courses:
>Utilize websites, tutorials, and video courses to deepen your understanding.

#### Programming Communities:
>Join forums and communities to ask questions and share your progress.

------------------------------------------------------------------------------
## What is C?⁣
* Since the late 19th century, C has been a popular programming language for general-purpose use.
* C language was developed by Dennis M. Ritchie at bell laboratory in early 1970s⁣
* Its applications are very diverse. It ranges from developing operating systems to databases and all.⁣    
* It is system programming language used to do low level programming (e.g., driver or kernel)
* Even if it’s old, it is still a very popular programming language.⁣
* As the whole UNIX operating system was written in C, it has a strong association with the operating system⁣
* C has also been used widely while creating iOS and Android kernels.⁣
* MySQL database is written using C.⁣
* Ruby and Pearl are mostly written using C.⁣
* Most part of Apache and NGINX is written using C.⁣
* Embedded Systems are created using C⁣
 

## Why should we learn C/ Features of C?
* As mentioned above, it is one of the most popular programming languages in the world.
* Learning any other popular programming language such as Python or C++ becomes a cakewalk already if you know C.
* C is a flexible language and that gets proven by the fact that it can be used in a variety of applications as well as technologies.
* C is very fast when compared to other programming languages be it Java or Python.
* C takes only significant CPU time for interpretation. That is why a lot of Python libraries such as NumPy, pandas, Scikit-learn, etc. are built using C.
* Being close to Machine language, some of its functions include direct access to machine-level hardware APIs.
* It is a structural language (Follows a specific Structure) /Compiled language this point should be added

* It is procedural programming language (POP) Procedurall Programming is the use of code in a step-wise procedure to develop applications. 

 

## How is it different from C++?
* The syntax of C++ is almost identical to that of C, as C++ was developed as an extension of C.
* In contrast to C, C++ supports classes and objects, while C does not.
* C gives most of the control to the hand of users. Things like memory allocation and manipulation are totally in the hands of the programmer. Being a flexible language, it provides more access to the programmer because of which it is more efficient.
*  .C is POP(procedure oriented programming) whereas c++ is OOP(Object oriented programming)