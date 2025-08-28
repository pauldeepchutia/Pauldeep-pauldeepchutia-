#include <stdio.h>

int main() {
    int n, i, j, product = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int arr[n][n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &arr[i][j]);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {  // above diagonal (i < j)
            product *= arr[i][j];
        }
    }

    printf("Product of elements above main diagonal = %d\n", product);
    return 0;
}
