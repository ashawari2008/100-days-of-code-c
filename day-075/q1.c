#include <stdio.h>

int main() {
    FILE *file;
    char text[200];

    file = fopen("data.txt", "a");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    fprintf(file, "\n%s", text);

    fclose(file);

    printf("File updated successfully with appended text.\n");

    return 0;
}