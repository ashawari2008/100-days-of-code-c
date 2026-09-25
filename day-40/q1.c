#include <stdio.h>

int main() {
    int rows, columns;
    int matrix[100][100];
    int i, j, d;

    scanf("%d %d", &rows, &columns);

    // Read matrix
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Traverse diagonals
    for (d = 0; d < rows + columns - 1; d++) {
        for (i = 0; i < rows; i++) {
            j = d - i;

            if (j >= 0 && j < columns) {
                printf("%d ", matrix[i][j]);
            }
        }
    }

    return 0;
}