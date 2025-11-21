#include <stdio.h>

int diffFirstLast(int arr[], int n) {
    if (n <= 0)   // safety check
        return 0;

    return arr[n-1] - arr[0];   // last - first
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);

    int diff = diffFirstLast(arr, n);
    printf("Difference = %d\n", diff);
