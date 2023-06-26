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

// Function for Paese string
void parseString(const char *input, struct Student *student)
{
   const char *delimiter = " ";
   char *token;

   char *inputCopy = strdup(input);
   token = strtok(inputCopy, delimiter);

   if (token != NULL)
   {
      student->rollno = atoi(token);

      token = strtok(NULL, delimiter);
      strncpy(student->name, token, sizeof(student->name) - 1);
      student->name[sizeof(student->name) - 1] = '\0';

      token = strtok(NULL, delimiter);
      student->marks = atof(token);
   }

   free(inputCopy);
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

   char input[100];
   for (int i = 0; i < size; i++)
   {
      // Read user data
      printf("Enter student %d details (rollno name marks): ", i + 1);
      fgets(input, sizeof(input), stdin);
      input[strcspn(input, "\n")] = '\0';

      parseString(input, &students[i]);
   }

   // Print the result
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