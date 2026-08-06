#include <stdio.h>

int main() {
    int n;

    printf("Enter size: ");
    scanf("%d", &n);

    int arr[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &arr[i]);
    }

    int m;
    printf("Enter position to remove: ");
    scanf("%d", &m);

    if (m < 1 || m > n) {
        printf("Invalid position");
        return 0;
    }

    // Shift elements left
    for (int i = m - 1; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    // Print new array
    printf("Array after deletion:\n");
    for (int i = 0; i < n - 1; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
