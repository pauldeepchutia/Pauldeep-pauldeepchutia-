#include <stdio.h>
#define MAX 200

int main(void) {
    int n, arr[MAX];

    printf("Enter number of elements (0-%d): ", MAX);
    if (scanf("%d", &n) != 1 || n < 0 || n > MAX) return 0;

    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    printf("Traversing array: ");
    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
