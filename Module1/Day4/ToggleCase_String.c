#include <stdio.h>

void toggleCase(char *str) {
    while (*str) {
        if (*str >= 'a' && *str <= 'z') {
            *str = *str - 32;  // Convert lowercase to uppercase
        } else if (*str >= 'A' && *str <= 'Z') {
            *str = *str + 32;  // Convert uppercase to lowercase
        }
        str++;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    toggleCase(str);

    printf("Toggled case: %s", str);

    return 0;
}
