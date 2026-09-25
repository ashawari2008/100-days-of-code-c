#include <stdio.h>

int main() {
    int n, i, position, element;
    int arr[100];

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d %d", &position, &element);

    // Shift elements to the right
    for (i = n; i >= position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position - 1] = element;
    n++;

    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}