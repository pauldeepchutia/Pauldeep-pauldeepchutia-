#include <stdio.h>

int main() {
    int n, i, j, sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int arr[n][n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    for (i = 0; i < n; i++)
        sum += arr[i][i];   // main diagonal

    printf("Sum of diagonal elements = %d\n", sum);
    return 0;
}
