#include <stdio.h>

int main() {
    int n, m, i, j;
    int matrix[100][100];
    int sum = 0;

    scanf("%d %d", &n, &m);

    // Read matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Add main diagonal elements
    for (i = 0; i < n; i++) {
        sum = sum + matrix[i][i];
    }

    printf("%d", sum);

    return 0;
}