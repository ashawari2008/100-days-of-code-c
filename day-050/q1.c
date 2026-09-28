#include <stdio.h>

int main() {
    char date[20];

    scanf("%s", date);

    printf("%.2s-Apr-%.4s", date, date + 6);

    return 0;
}