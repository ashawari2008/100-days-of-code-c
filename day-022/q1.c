#include <stdio.h>

int main() {
    int num, original, digit, sum = 0;
    int i, factorial;

    scanf("%d", &num);

    original = num;

    while (num != 0) {
        digit = num % 10;
        factorial = 1;

        for (i = 1; i <= digit; i++) {
            factorial = factorial * i;
        }

        sum = sum + factorial;
        num = num / 10;
    }

    if (sum == original) {
        printf("Strong number");
    }
    else {
        printf("Not strong number");
    }

    return 0;
}