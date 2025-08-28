#include <stdio.h>

int main() {
    int n1, n2, i;
    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    float a[n1], b[n2], c[n1 + n2];

    printf("Enter elements of first array:\n");
    for (i = 0; i < n1; i++) scanf("%f", &a[i]);

    printf("Enter elements of second array:\n");
    for (i = 0; i < n2; i++) scanf("%f", &b[i]);

    // Merge
    for (i = 0; i < n1; i++) c[i] = a[i];
    for (i = 0; i < n2; i++) c[n1 + i] = b[i];

    printf("\nMerged array in reverse:\n");
    for (i = n1 + n2 - 1; i >= 0; i--) printf("%.2f ", c[i]);

    return 0;
}
