#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

void changeToUpperCase(char *str) {
    while (*str) {
        *str = toupper(*str);
        str++;
    }
}

void changeToLowerCase(char *str) {
    while (*str) {
        *str = tolower(*str);
        str++;
    }
}

void changeToSentenceCase(char *str) {
    int isFirstChar = 1;

    while (*str) {
        if (isFirstChar && isalpha(*str))
            *str = toupper(*str);
        else
            *str = tolower(*str);

        if (*str == '.' || *str == '!' || *str == '?')
            isFirstChar = 1;
        else if (isalpha(*str))
            isFirstChar = 0;

        str++;
    }
}

int main(int argc, char *argv[]) {
   if (argc == 0) {
        printf("Insufficient arguments.\n");
        return 1;
    }

    char *option = argv[1];

    FILE *sourceFile = fopen("C:/Users/shruti/OneDrive/Documents/Problem2.txt", "r");
    if (sourceFile == NULL) {
        printf("Unable to open the source file.\n");
        return 1;
    }

    FILE *destinationFile = fopen("C:/Users/shruti/OneDrive/Documents/Problem2_NewFile.txt", "w");
    if (destinationFile == NULL) {
        printf("Unable to create the destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    char ch;
    while ((ch = fgetc(sourceFile)) != EOF) {
        if (option != NULL) {
            switch (*option) {
                case '-u':
                    ch = toupper(ch);
                    break;
                case '-l':
                    ch = tolower(ch);
                    break;
                case '-s':
                    changeToSentenceCase(&ch);
                    break;
                default:
                    break;
            }
        }
        fputc(ch, destinationFile);
    }

    printf("File copied successfully.\n");

    fclose(sourceFile);
    fclose(destinationFile);

    return 0;
}