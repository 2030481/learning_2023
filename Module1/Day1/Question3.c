/*This is Question 3
Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary.
  */
  #include <stdio.h>

int main() {
    int rollNo, physicsMarks, mathMarks, chemMarks;
    char name[50];

    printf("Enter Roll No: ");
    scanf("%d", &rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]s", name);

    printf("Enter Marks of Physics: ");
    scanf("%d", &physicsMarks);

    printf("Enter Marks of Math: ");
    scanf("%d", &mathMarks);

    printf("Enter Marks of Chemistry: ");
    scanf("%d", &chemMarks);

    int totalMarks = physicsMarks + mathMarks + chemMarks;
    float percentage = (float)totalMarks / 3;

    printf("\n--- Summary ---\n");
    printf("Roll No: %d\n", rollNo);
    printf("Name: %s\n", name);
    printf("Physics Marks: %d\n", physicsMarks);
    printf("Math Marks: %d\n", mathMarks);
    printf("Chemistry Marks: %d\n", chemMarks);
    printf("Total Marks: %d\n", totalMarks);
    printf("Percentage: %.2f%%\n", percentage);

    return 0;
}