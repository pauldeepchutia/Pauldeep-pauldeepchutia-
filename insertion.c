#include <stdio.h>
#define MAX 200

int main(void) {
    int n, arr[MAX], pos, val;

    printf("Enter number of elements (0-%d): ", MAX - 1);
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX - 1) return 0;

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    if (n == MAX) { printf("Array full. Cannot insert.\n"); return 0; }

    printf("Enter value to insert: ");
    scanf("%d", &val);
    printf("Enter position to insert at (0..%d): ", n);
    if (scanf("%d", &pos) != 1 || pos < 0 || pos > n) {
        printf("Invalid position.\n"); return 0;
    }

    for (int i = n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = val; n++;

    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
