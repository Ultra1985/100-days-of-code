#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);      // size of array
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);   // array elements

    scanf("%d", &k);      // window size

    int start = 0, end = 0;

    // To store indices of negative numbers
    int negIndex[n], front = 0, rear = 0;

    while (end < n) {

        // If current number is negative, store its index
        if (arr[end] < 0) {
            negIndex[rear++] = end;
        }

        // Check if window size is reached
        if (end - start + 1 == k) {

            // Remove negative numbers that are outside current window
            while (front < rear && negIndex[front] < start) {
                front++;
            }

            // Print first negative
            if (front < rear)
                printf("%d ", arr[negIndex[front]]);
            else
                printf("0 ");

            // Slide window
            start++;
        }

        end++;
    }

    return 0;
}
