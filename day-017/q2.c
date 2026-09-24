#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    scanf("%d", &num);

    if (num <= 1) {
        isPrime = 0;
    }
    else {
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if (isPrime == 1) {
        printf("Prime");
    }
    else {
        printf("Not prime");
    }

    return 0;
}