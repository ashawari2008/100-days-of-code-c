#include <stdio.h>

int main() {
    int n, m, i, j;
    int matrix[100][100];
    int distinct = 1;

    scanf("%d %d", &n, &m);

    // Read matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Check if matrix is square
    if (n != m) {
        distinct = 0;
    } else {
        // Compare each diagonal element with the others
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                if (matrix[i][i] == matrix[j][j]) {
                    distinct = 0;
                    break;
                }
            }

            if (distinct == 0) {
                break;
            }
        }
    }

    if (distinct == 1) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}