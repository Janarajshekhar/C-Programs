#include <stdio.h>
void shiftRight(int a[], int n) {
    int temp = a[n - 1];
    for (int i = n - 1; i > 0; i--) {
        a[i] = a[i - 1];
    }
    a[0] = temp;
}

void printArray(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[100], n;
    printf("Enter how many number in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    printf("Original array: ");
    printArray(a, n);
    shiftRight(a, n);
    printf("Array after shifting one position to the right: ");
    printArray(a, n);
    return 0;
}