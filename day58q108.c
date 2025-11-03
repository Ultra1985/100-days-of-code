#include <stdio.h>

int main() {
    int n, i;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int nums[n], answer[n], prefix[n], suffix[n];

    printf("Enter %d elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

   
    prefix[0] = 1;
    for (i = 1; i < n; i++) {
        prefix[i] = prefix[i - 1] * nums[i - 1];
    }

    
    suffix[n - 1] = 1;
    for (i = n - 2; i >= 0; i--) {
        suffix[i] = suffix[i + 1] * nums[i + 1];
    }

    
    for (i = 0; i < n; i++) {
        answer[i] = prefix[i] * suffix[i];
    }

    
    printf("Product array (excluding self): ");
    for (i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if (i < n - 1) printf(", ");
    }
    printf("\n");

    return 0;
}
