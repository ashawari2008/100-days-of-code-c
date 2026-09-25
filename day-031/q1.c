#include <stdio.h>

int main() {
    int n, i, search;
    int arr[100];
    int found = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &search);

    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            found = i;
            break;
        }
    }

    if (found != -1) {
        printf("Found at index %d", found);
    } else {
        printf("-1");
    }

    return 0;
}