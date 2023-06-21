/*
Day7/Task 1
File Copy: Write a C program to copy a file using file operations
-RaviRanjanKumar
*/

#include <stdio.h>

// Function to open a file
FILE *openFile(const char *fileName, const char *mode)
{
   FILE *file = fopen(fileName, mode);
   if (file == NULL)
   {
      printf("Unable to open the file or file not found: %s\n", fileName);
      return NULL;
   }
   return file;
}

// Function to close a file
void closeFile(FILE *file)
{
   fclose(file);
}

// Function to copy a file
void copyFile(const char *sourceFileName, const char *destinationFileName)
{
   // Open the source file
   FILE *sourceFile = openFile(sourceFileName, "r");
   if (sourceFile == NULL)
   {
      return;
   }

   // Open the destination file
   FILE *destinationFile = openFile(destinationFileName, "w");
   if (destinationFile == NULL)
   {
      closeFile(sourceFile);
      return;
   }

   char ch;
   // Copy contents of the source file to the destination file
   while ((ch = fgetc(sourceFile)) != EOF)
   {
      fputc(ch, destinationFile);
   }

   printf("File copied successfully.\n");

   // Close the files
   closeFile(sourceFile);
   closeFile(destinationFile);
}

int main()
{
   char sourceFileName[100], destinationFileName[100];

   printf("Enter the source file name: ");
   scanf("%s", sourceFileName);

   printf("Enter the destination file name: ");
   scanf("%s", destinationFileName);

   // Call the function to copy the file
   copyFile(sourceFileName, destinationFileName);

   return 0;
}


/*
Sample output

Enter the source file name: FileSource.txt
Enter the destination file name: FileDestination.txt
File copied successfully.

Enter the source file name: abc.txt
Enter the destination file name: def.txt
Unable to open the file or file not found: abc.txt

*/