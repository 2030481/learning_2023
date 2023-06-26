#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure definition
struct Student
{
   int rollno;
   char name[20];
   float marks;
};

// Function to initialize all members in the array
void initializeStudents(struct Student *students, int size)
{
   for (int i = 0; i < size; i++)
   {
      students[i].rollno = 0;
      strcpy(students[i].name, "");
      students[i].marks = 0.0;
   }
}

int main()
{
   // Local Variable declaration
   int size;

   // Read user data
   printf("Enter the number of students: ");
   scanf("%d", &size);
   getchar();

   struct Student *students = malloc(size * sizeof(struct Student));

   // Initialize the array of students
   initializeStudents(students, size);

   // Print the initialized values
   for (int i = 0; i < size; i++)
   {
      printf("\nStudent %d:\n", i + 1);
      printf("Roll No: %d\n", students[i].rollno);
      printf("Name: %s\n", students[i].name);
      printf("Marks: %.2f\n\n", students[i].marks);
   }

   free(students);

   return 0;
}