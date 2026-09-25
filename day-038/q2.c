#include <stdio.h>

int main() {
    int n, m, i, j;
    int matrix[100][100];
    int symmetric = 1;

    scanf("%d %d", &n, &m);

    // Read matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // A symmetric matrix must be square
    if (n != m) {
        symmetric = 0;
    } else {
        // Compare matrix[i][j] with matrix[j][i]
        for (i = 0; i < n; i++) {
            for (j = 0; j < m; j++) {
                if (matrix[i][j] != matrix[j][i]) {
                    symmetric = 0;
                    break;
                }
            }
            if (symmetric == 0) {
                break;
            }
        }
    }

    if (symmetric == 1) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}