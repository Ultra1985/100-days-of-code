#include <stdio.h>

int main() {
    int n;
    double sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int numerator = 2 * i + 1;     
        int denominator = 2 * i + 2;   
        sum += (double)numerator / denominator;
    }

    printf("Sum of the series up to %d terms is %.4lf\n", n, sum);

    return 0;
}
