/*
4. write a program to Store Data for n students in Structures Dynamically.
*/
#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[50];
    int age;
    float marks;
};

int main() {
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    struct Student *students = (struct Student *)malloc(n * sizeof(struct Student));

    if (students == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", students[i].name);

        printf("Age: ");
        scanf("%d", &(students[i].age));

        printf("Marks: ");
        scanf("%f", &(students[i].marks));
    }

    printf("\nStudent Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nDetails for student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Age: %d\n", students[i].age);
        printf("Marks: %.2f\n", students[i].marks);
    }

    free(students);

    return 0;
}

/*
Output :
@2030481 ➜ .../learning_2023/Module1/Day6/Level1 (main) $ ./a.out
Enter the number of students: 2
Enter details for student 1:
Name: Ravi
Age: 23
Marks: 85
Enter details for student 2:
Name: Aarush
Age: 22
Marks: 50

Student Details:

Details for student 1:
Name: Ravi
Age: 23
Marks: 85.00

Details for student 2:
Name: Aarush
Age: 22
Marks: 50.00
*/