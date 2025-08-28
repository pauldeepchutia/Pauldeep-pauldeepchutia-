#include <stdio.h>
#define MAX 400

int main(void) {
    int n1, n2, a[MAX], b[MAX], c[MAX];

    printf("Enter size of first array (0-%d): ", MAX/2);
    if (scanf("%d", &n1) != 1 || n1 < 0 || n1 > MAX/2) return 0;
    printf("Enter %d elements of first array: ", n1);
    for (int i = 0; i < n1; i++) scanf("%d", &a[i]);

    printf("Enter size of second array (0-%d): ", MAX/2);
    if (scanf("%d", &n2) != 1 || n2 < 0 || n2 > MAX/2) return 0;
    printf("Enter %d elements of second array: ", n2);
    for (int i = 0; i < n2; i++) scanf("%d", &b[i]);

    // Simple concatenation merge
    for (int i = 0; i < n1; i++) c[i] = a[i];
    for (int i = 0; i < n2; i++) c[n1 + i] = b[i];

    printf("Merged array: ");
    for (int i = 0; i < n1 + n2; i++) printf("%d ", c[i]);
    printf("\n");
    return 0;
}
