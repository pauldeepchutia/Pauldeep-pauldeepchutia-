#include <stdio.h>

int main() {
    int n, pos, i;
    float num;
    printf("Enter size of array: ");
    scanf("%d", &n);
    float arr[n + 1];  // +1 for new element

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) scanf("%f", &arr[i]);

    printf("Enter new number to insert: ");
    scanf("%f", &num);
    printf("Enter position (0 to %d): ", n);
    scanf("%d", &pos);

    if (pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 0;
    }

    for (i = n; i > pos; i--) arr[i] = arr[i - 1];
    arr[pos] = num;
    n++;

    printf("Updated array:\n");
    for (i = 0; i < n; i++) printf("%.2f ", arr[i]);

    return 0;
}
