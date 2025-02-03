#include <stdio.h>
#include <string.h>
#include <stdlib.h>

const char secret[];

int main() {
    char input[19];

    printf("Enter the secret (max 18 chars):\n");
    if (fgets(input, sizeof(input), stdin) == NULL) {
        printf("Error reading input.\n");
        return 1;
    }

    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    if (strncmp(input, secret, 18) == 0) {
        printf("You got it!\n");
    } else {
        printf("Wrong!\n");
    }

    return 0;
}