#include <stdio.h>

int main() {
    char str[200];
    int i = 0, start = 0;
    int currentLength = 0, maxLength = 0;
    int maxStart = 0;

    scanf("%[^\n]", str);

    while (1) {
        if (str[i] != ' ' && str[i] != '\0') {
            currentLength++;
        } else {
            if (currentLength > maxLength) {
                maxLength = currentLength;
                maxStart = start;
            }

            currentLength = 0;
            start = i + 1;
        }

        if (str[i] == '\0') {
            break;
        }

        i++;
    }

    // Print the longest word
    for (i = maxStart; i < maxStart + maxLength; i++) {
        printf("%c", str[i]);
    }

    return 0;
}