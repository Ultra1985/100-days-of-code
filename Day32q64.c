#include <stdio.h>

int main() {
    long num;
    int count[10] = {0};  

    printf("Enter an integer number: ");
    scanf("%ld", &num);

    
    if (num < 0) {
        num = -num;
    }

   
    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }

    
    int maxCount = count[0];
    int maxDigit = 0;
    for (int i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit %d occurs the most times: %d times\n", maxDigit, maxCount);

    return 0;
}
