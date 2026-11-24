#include <stdio.h>

int main() {
    FILE *file;
    char filename[100];
    char ch;

    printf("Enter filename: ");
    scanf("%s", filename);

    file = fopen(filename, "r");

    if (file == NULL) {
        printf("Error: File does not exist!\n");
        return 1;
    }

    printf("File opened successfully.\n");
    printf("File content:\n");

    while ((ch = fgetc(file)) != EOF) {
        printf("%c", ch);
    }

    fclose(file);

    return 0;
}