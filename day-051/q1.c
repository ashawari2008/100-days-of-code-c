#include <stdio.h>

int main() {
    int nums[] = {5, 7, 7, 8, 8, 10};
    int target = 8;
    int n = 6;

    int first = -1;
    int last = -1;

    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            if (first == -1) {
                first = i;
            }
            last = i;
        }
    }

    printf("%d,%d", first, last);

    return 0;
}