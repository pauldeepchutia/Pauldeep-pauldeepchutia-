#include <stdio.h>

int main() {
    int m, n, i, j, count = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    int arr[m][n];

    printf("Enter elements:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] != 0) count++;
        }
    }

    printf("Total non-zero elements = %d\n", count);
    return 0;
}
