#include <stdio.h>

int isLowerTriangular(int n, int a[n][n]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {  // i < j → above diagonal
            if (a[i][j] != 0) return 0;
        }
    }
    return 1;
}

int main() {
    int n, i, j;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int arr[n][n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    if (isLowerTriangular(n, arr))
        printf("Matrix is Lower Triangular\n");
    else
        printf("Matrix is NOT Lower Triangular\n");

    return 0;
}
