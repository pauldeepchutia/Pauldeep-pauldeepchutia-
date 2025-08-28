#include <stdio.h>

void readMatrix(int n, int a[n][n]) {
    int i, j;
    printf("Enter elements of %d x %d matrix:\n", n, n);
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
}

void displayMatrix(int n, int a[n][n]) {
    int i, j;
    printf("Matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++)
            printf("%d ", a[i][j]);
        printf("\n");
    }
}

int main() {
    int n;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int arr[n][n];

    readMatrix(n, arr);
    displayMatrix(n, arr);

    return 0;
}
