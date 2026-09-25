#include <stdio.h>

int main() {
    int rows, columns;
    int matrix[100][100];
    int rowSum[100];
    int i, j;

    scanf("%d %d", &rows, &columns);

    // Read matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate sum of each row
    for (i = 0; i < rows; i++) {
        rowSum[i] = 0;

        for (j = 0; j < columns; j++) {
            rowSum[i] = rowSum[i] + matrix[i][j];
        }
    }

    // Print row sums
    for (i = 0; i < rows; i++) {
        printf("%d ", rowSum[i]);
    }

    return 0;
}