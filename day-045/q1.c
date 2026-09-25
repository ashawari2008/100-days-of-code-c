#include <stdio.h>

int main() {
    char str[100];
    char ch;
    int i = 0, count = 0;

    scanf("%[^\n]", str);
    scanf(" %c", &ch);

    while (str[i] != '\0') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("%d", count);

    return 0;
}