#include <stdio.h>

int main() {
    int p, q, r, i, j, k, choice;
    printf("Enter dimensions (p q r): ");
    scanf("%d %d %d", &p, &q, &r);
    int A[p][q][r], B[p][q][r], C[p][q][r];

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            for (k = 0; k < r; k++)
                scanf("%d", &A[i][j][k]);

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < p; i++)
        for (j = 0; j < q; j++)
            for (k = 0; k < r; k++)
                scanf("%d", &B[i][j][k]);

    do {
        printf("\nMenu:\n1. Display\n2. Sum\n3. Transpose (swap j,k)\n4. Product\n5. Exit\nChoice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Matrix A:\n");
            for (i = 0; i < p; i++) {
                for (j = 0; j < q; j++) {
                    for (k = 0; k < r; k++)
                        printf("%d ", A[i][j][k]);
                    printf("\n");
                }
                printf("\n");
            }
        } else if (choice == 2) {
            printf("Sum of A and B:\n");
            for (i = 0; i < p; i++) {
                for (j = 0; j < q; j++) {
                    for (k = 0; k < r; k++) {
                        C[i][j][k] = A[i][j][k] + B[i][j][k];
                        printf("%d ", C[i][j][k]);
                    }
                    printf("\n");
                }
                printf("\n");
            }
        } else if (choice == 3) {
            printf("Transpose of A (swapping j,k):\n");
            for (i = 0; i < p; i++) {
                for (k = 0; k < r; k++) {
                    for (j = 0; j < q; j++) {
                        printf("%d ", A[i][j][k]);
                    }
                    printf("\n");
                }
                printf("\n");
            }
        } else if (choice == 4) {
            printf("Product (A*B element-wise):\n");
            for (i = 0; i < p; i++) {
                for (j = 0; j < q; j++) {
                    for (k = 0; k < r; k++) {
                        C[i][j][k] = A[i][j][k] * B[i][j][k];
                        printf("%d ", C[i][j][k]);
                    }
                    printf("\n");
                }
                printf("\n");
            }
        }
    } while (choice != 5);

    return 0;
}
