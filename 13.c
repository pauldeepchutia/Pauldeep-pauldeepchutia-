#include <stdio.h>

void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int n, i;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) scanf("%d", &arr[i]);

    // Simple bubble sort
    for (i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }

    // Swap second smallest and second largest
    if (n >= 4)
        swap(&arr[1], &arr[n - 2]);

    printf("Array after interchange:\n");
    for (i = 0; i < n; i++) printf("%d ", arr[i]);

    return 0;
}
