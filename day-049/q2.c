#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, lastSpace = -1;

    fgets(name, sizeof(name), stdin);

    // Find the last space
    for (i = 0; name[i] != '\0'; i++) {
        if (name[i] == ' ') {
            lastSpace = i;
        }
    }

    // Print initials of all words before surname
    printf("%c.", name[0]);

    for (i = 1; i < lastSpace; i++) {
        if (name[i] == ' ') {
            printf("%c.", name[i + 1]);
        }
    }

    // Print surname in full
    printf(" ");
    for (i = lastSpace + 1; name[i] != '\0' && name[i] != '\n'; i++) {
        printf("%c", name[i]);
    }

    return 0;
}