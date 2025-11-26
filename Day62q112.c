#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);     // size of array

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < n; i++) {
        // Decide whether to extend the current subarray or start new from arr[i]
        if (currentSum + arr[i] < arr[i])
            currentSum = arr[i];
        else
            currentSum += arr[i];

        // Update maxSum
        if (currentSum > maxSum)
            maxSum = currentSum;
    }

    printf("%d", maxSum);
    return 0;
}
