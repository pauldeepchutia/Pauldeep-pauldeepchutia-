#include <stdio.h>

int main() {
    int n, m, i, j;
    printf("Enter rows and columns: ");
    scanf("%d %d", &n, &m);

    int arr[n][m];
    int (*p)[m];   // pointer to array of m integers

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);

    p = arr;  // pointer to first row

    printf("Displaying using pointer:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            printf("%d ", *(*(p + i) + j));
        }
        printf("\n");
    }
    return 0;
}
