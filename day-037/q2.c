#include <stdio.h>

int main() {
    int rows, columns;
    int matrix[100][100];
    int i, j;

    scanf("%d %d", &rows, &columns);

    // Read matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print transpose
    for (i = 0; i < columns; i++) {
        for (j = 0; j < rows; j++) {
            printf("%d ", matrix[j][i]);
        }
        printf("\n");
    }

    return 0;
}