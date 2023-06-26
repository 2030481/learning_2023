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

// Function to perform a search operation based on the name of the student
void searchStudentByName(const struct Student *students, int size, const char *searchName)
{
   int found = 0;
   for (int i = 0; i < size; i++)
   {
      if (strcmp(students[i].name, searchName) == 0)
      {
         found = 1;
         printf("\nStudent found:\n");
         printf("Roll No: %d\n", students[i].rollno);
         printf("Name: %s\n", students[i].name);
         printf("Marks: %.2f\n\n", students[i].marks);
      }
   }

   if (!found)
   {
      printf("\nStudent not found.\n");
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

   // Read the details of each student
   for (int i = 0; i < size; i++)
   {
      printf("Enter student %d details (rollno name marks): ", i + 1);
      scanf("%d %s %f", &(students[i].rollno), students[i].name, &(students[i].marks));
      getchar();
   }

   // Perform a search operation based on the name of the student
   char searchName[20];
   printf("Enter the name of the student to search: ");
   scanf("%s", searchName);

   searchStudentByName(students, size, searchName);

   free(students);

   return 0;
}