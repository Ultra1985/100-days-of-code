#include <stdio.h>

int main() {
    int n, i;
    unsigned long long product = 1;  

    
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    
    for (i = 2; i <= n; i += 2) {
        product *= i;
    }

    
    if (product == 1) {
        printf("No even numbers in the range 1 to %d.\n", n);
    } else {
        printf("Product of even numbers from 1 to %d = %llu\n", n, product);
    }

    return 0;
}
