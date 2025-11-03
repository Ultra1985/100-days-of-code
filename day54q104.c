#include <stdio.h>

int main() {
    int n;
    printf("Enter a positive integer n: ");
    scanf("%d", &n);

    int totalSum = n * (n + 1) / 2;  
    int leftSum = 0, x = -1;

    for (int i = 1; i <= n; i++) {
        leftSum += i;  
        int rightSum = totalSum - leftSum + i;  

        if (leftSum == rightSum) {
            x = i; 
            break;
        }
    }

    printf("Pivot integer: %d\n", x);
    return 0;
}
