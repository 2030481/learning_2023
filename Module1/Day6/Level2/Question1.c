/*
Task 1
Example String : "1001 Aron 100.00"
Example Structure :
    struct Student{
        int rollno;
        char name[20];
        float marks;
    };
Write a function to add a member at the end of the above array of structures
Note : Code must use Dynamic Memory concept

*/

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

// Function to add members
void addMember(struct Student **array, int *size)
{
   // Increase the size of the array by 1
   (*size)++;
   *array = (struct Student *)realloc(*array, (*size) * sizeof(struct Student));

   // New member details
   struct Student newMember;
   printf("Enter student %d details (rollno name marks): ", *size);
   scanf("%d %s %f", &(newMember.rollno), newMember.name, &(newMember.marks));
   getchar();

   // Assign new member at the end of the array
   (*array)[(*size) - 1] = newMember;
}

int main()
{
   struct Student *students = NULL;
   int size = 3; // Predefined number of students

   // Allocate memory for the initial array of structures
   students = (struct Student *)malloc(size * sizeof(struct Student));

   // Predefined student details
   students[0].rollno = 1001;
   strcpy(students[0].name, "abc");
   students[0].marks = 100.00;

   students[1].rollno = 1002;
   strcpy(students[1].name, "def");
   students[1].marks = 90.50;

   students[2].rollno = 1003;
   strcpy(students[2].name, "ijk");
   students[2].marks = 95.75;

   // Print the initial array of structures
   printf("Array of Structures:\n");
   for (int i = 0; i < size; i++)
   {
      printf("Student %d: Roll No: %d, Name: %s, Marks: %.2f\n", i + 1, students[i].rollno, students[i].name, students[i].marks);
   }

   int additionalStudents;
   printf("Enter the number of additional students: ");
   scanf("%d", &additionalStudents);
   getchar();

   // Read the details of additional students
   for (int i = 0; i < additionalStudents; i++)
   {
      addMember(&students, &size);
   }

   // Print the updated array of structures
   printf("\nUpdated Array of Structures:\n");
   for (int i = 0; i < size; i++)
   {
      printf("Student %d: Roll No: %d, Name: %s, Marks: %.2f\n", i + 1, students[i].rollno, students[i].name, students[i].marks);
   }

   free(students);

   return 0;
}
