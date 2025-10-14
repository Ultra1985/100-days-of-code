#include <stdio.h>
#include <math.h>

int main() {
    int num, originalNum, remainder, n = 0;
    double sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    
    int temp = num;
    while (temp != 0) {
        n++;
        temp = temp / 10;
    }

    temp = num;
    
    while (temp != 0) {
        remainder = temp % 10;
        sum += pow(remainder, n);
        temp = temp / 10;
    }

    
    if ((int)sum == originalNum) {
        printf("%d is an Armstrong number.\n", originalNum);
    } else {
        printf("%d is not an Armstrong number.\n", originalNum);
    }

    return 0;
}
