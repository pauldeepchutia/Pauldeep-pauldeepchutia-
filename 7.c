#include <stdio.h>

int main() {
    int n, i, sum = 0;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);
    int arr[n][n];

    printf("Enter elements:\n");
    for (i = 0; i < n * n; i++) {
        scanf("%d", (*(arr) + i));  // pointer style input
    }

    for (i = 0; i < n; i++) {
        sum += *(*(arr + i) + i);   // accessing diagonal elements
    }

    printf("Sum of main diagonal = %d\n", sum);
    return 0;
}
