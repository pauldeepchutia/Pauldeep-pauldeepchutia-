#include <stdio.h>
#define MAX 200

int main(void) {
    int n, arr[MAX], pos;

    printf("Enter number of elements (1-%d): ", MAX);
    if (scanf("%d", &n) != 1 || n < 1 || n > MAX) return 0;

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Enter position to delete (0..%d): ", n - 1);
    if (scanf("%d", &pos) != 1 || pos < 0 || pos >= n) {
        printf("Invalid position.\n"); return 0;
    }

    for (int i = pos; i < n - 1; i++) arr[i] = arr[i + 1];
    n--;

    printf("Array after deletion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
