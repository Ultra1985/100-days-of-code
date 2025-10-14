#include <stdio.h>

int main() {
    int num, remainder, product = 1;
    int hasOdd = 0; 

    printf("Enter a number: ");
    scanf("%d", &num);

    int temp = num; 

    
    while (temp != 0) {
        remainder = temp % 10;      
        if (remainder % 2 != 0) {    
            product *= remainder;
            hasOdd = 1;
        }
        temp = temp / 10;          
    }

    if (hasOdd) {
        printf("Product of odd digits of %d is %d\n", num, product);
    } else {
        printf("No odd digits in %d\n", num);
    }

    return 0;
}
