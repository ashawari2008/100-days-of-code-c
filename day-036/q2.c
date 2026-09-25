#include <stdio.h>

int main() {
    int rows, columns;
    int matrix[100][100];
    int i, j, sum = 0;

    scanf("%d %d", &rows, &columns);

    // Read matrix elements and calculate sum
    for (i = 0; i < rows; i++) {
        for (j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
            sum = sum + matrix[i][j];
        }
    }

    printf("%d", sum);

    return 0;
}