#include <stdio.h>

int main() {
    int n;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    int freq[1000] = {0};

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    for (int i = 0; i < n; i++) {
        if (freq[nums[i]] == 1) {
            printf("Repeated element: %d\n", nums[i]);
            return 0;
        }

        freq[nums[i]] = 1;
    }

    printf("No repeated element found\n");

    return 0;
}