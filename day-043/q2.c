#include <stdio.h>

int main() {
    char str[100];
    int i, length = 0;
    int palindrome = 1;

    scanf("%[^\n]", str);

    // Find length of string
    while (str[length] != '\0') {
        length++;
    }

    // Compare characters from both ends
    for (i = 0; i < length / 2; i++) {
        if (str[i] != str[length - 1 - i]) {
            palindrome = 0;
            break;
        }
    }

    if (palindrome == 1) {
        printf("Palindrome");
    } else {
        printf("Not palindrome");
    }

    return 0;
}