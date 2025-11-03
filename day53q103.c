#include <stdio.h>

int main() {
    int n, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int totalSum = 0, leftSum = 0;
    for (i = 0; i < n; i++) {
        totalSum += arr[i];
    }

    int pivotIndex = -1;

    for (i = 0; i < n; i++) {
        int rightSum = totalSum - leftSum - arr[i];
        if (leftSum == rightSum) {
            pivotIndex = i;
            break;  
        }
        leftSum += arr[i];
    }

    printf("Pivot index: %d\n", pivotIndex);

    return 0;
}
