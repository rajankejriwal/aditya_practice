#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isInteger(char s[]) {
    for (int i = 0; i < strlen(s); i++) {
        if (!isdigit(s[i])) {
            return 0; // It's not an integer
        }
    }
    return 1; // It's an integer
}

int main() {
    char input[100];
    printf("Enter a value: ");
    scanf("%s", input);

    if (isInteger(input)) {
        printf("The input is an integer.\n");
    } else {
        printf("The input is a string.\n");
    }

    return 0;
}
