#include <stdio.h>

int main() {
    int rows, columns;
    int matrix[100][100];
    int i, j;

    scanf("%d %d", &rows, &columns);

    // Read matrix elements
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Print matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}