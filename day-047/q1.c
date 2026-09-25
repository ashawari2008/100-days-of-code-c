#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};
    int i;

    scanf("%[^\n]", str1);
    scanf(" %[^\n]", str2);

    // Count characters of first string
    for (i = 0; str1[i] != '\0'; i++) {
        count[(unsigned char)str1[i]]++;
    }

    // Subtract characters of second string
    for (i = 0; str2[i] != '\0'; i++) {
        count[(unsigned char)str2[i]]--;
    }

    // Check if all counts are zero
    for (i = 0; i < 256; i++) {
        if (count[i] != 0) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");

    return 0;
}