#include <stdio.h>

int main() {
    int n, i, search;
    int arr[100];
    int low, high, mid;
    int found = -1;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &search);

    low = 0;
    high = n - 1;

    while (low <= high) {
        mid = (low + high) / 2;

        if (arr[mid] == search) {
            found = mid;
            break;
        }
        else if (arr[mid] < search) {
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    if (found != -1) {
        printf("Found at index %d", found);
    }
    else {
        printf("-1");
    }

    return 0;
}