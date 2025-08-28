#include <stdio.h>

int isSymmetric(int n, int a[n][n]) {
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) return 0;
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

    if (isSymmetric(n, arr))
        printf("Matrix is Symmetric\n");
    else
        printf("Matrix is NOT Symmetric\n");

    return 0;
}
