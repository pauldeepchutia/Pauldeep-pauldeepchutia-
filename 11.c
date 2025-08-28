#include <stdio.h>

int main() {
    int m, n, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &m, &n);
    int arr[m][n], odd[m * n], even[m * n];
    int oddCount = 0, evenCount = 0;

    printf("Enter elements of the array:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            if (arr[i][j] % 2 == 0)
                even[evenCount++] = arr[i][j];
            else
                odd[oddCount++] = arr[i][j];
        }
    }

    printf("\nOdd elements:\n");
    for (i = 0; i < oddCount; i++) printf("%d ", odd[i]);

    printf("\nEven elements:\n");
    for (i = 0; i < evenCount; i++) printf("%d ", even[i]);

    return 0;
}
