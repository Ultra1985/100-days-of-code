#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    // Expected sum of numbers from 0 to n
    int totalSum = n * (n + 1) / 2;

    // Actual sum of array elements
    int arraySum = 0;
    for (int i = 0; i < n; i++)
        arraySum += arr[i];

    int missing = totalSum - arraySum;

    printf("%d", missing);

    return 0;
}
