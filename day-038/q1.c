#include <stdio.h>

int main() {
    int rows, columns;
    int a[100][100], b[100][100], sum[100][100];
    int i, j;

    // Read rows and columns
    scanf("%d %d", &rows, &columns);

    // Read first matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Read second matrix
    scanf("%d %d", &rows, &columns);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &b[i][j]);
        }
    }

    // Add the matrices
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            sum[i][j] = a[i][j] + b[i][j];
        }
    }

    // Print result
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}