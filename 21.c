#include <stdio.h>

int main() {
    int n, m, i, j;
    printf("Enter rows and columns of matrices: ");
    scanf("%d %d", &n, &m);

    int A[n][m], B[n][m], C[n][m];

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &A[i][j]);

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &B[i][j]);

    // Compute 2A + 3B
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            C[i][j] = 2 * A[i][j] + 3 * B[i][j];

    printf("Resultant Matrix (2A + 3B):\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
    return 0;
}
