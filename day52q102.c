#include <stdio.h>

int main() {
    int n, x;
    int i, ceilIndex = -1;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the value of x: ");
    scanf("%d", &x);

   
    for (i = 0; i < n; i++) {
        if (arr[i] >= x) {
            ceilIndex = i;
            break;  
        }
    }

    if (ceilIndex == -1)
        printf("Output: -1\n");
    else
        printf("Ceil index: %d (Element = %d)\n", ceilIndex, arr[ceilIndex]);

    return 0;
}
