#include <stdio.h>

int main() {
    int m, n;
    scanf("%d", &m);

    int arr1[m];
    for (int i = 0; i < m; i++)
        scanf("%d", &arr1[i]);

    scanf("%d", &n);

    int arr2[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr2[i]);

    int merged[m + n];
    int i = 0, j = 0, k = 0;

    // Merge both arrays
    while (i < m && j < n) {
        if (arr1[i] <= arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    // Copy remaining elements (if any)
    while (i < m)
        merged[k++] = arr1[i++];

    while (j < n)
        merged[k++] = arr2[j++];

    // Print merge
