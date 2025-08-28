#include <stdio.h>

int main() {
    int m, n, i, j, sum = 0, count = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    int arr[m][n];

    printf("Enter elements of array:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];
            count++;
        }
    }

    printf("Sum = %d, Mean = %.2f\n", sum, (float)sum / count);
    return 0;
}
