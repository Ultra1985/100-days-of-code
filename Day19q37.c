#include <stdio.h>


int hcf(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2, lcmValue;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    
    lcmValue = (num1 * num2) / hcf(num1, num2);

    printf("LCM of %d and %d is %d\n", num1, num2, lcmValue);

    return 0;
}
