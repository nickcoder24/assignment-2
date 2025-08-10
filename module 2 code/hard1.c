#include <stdio.h>
#include <math.h>


int isArmstrong(int num) {
    int original = num, sum = 0, digits = 0, temp,i;

   
    temp = num;
    while (temp > 0) {
        digits++;
        temp /= 10;
    }

    
    temp = num;
    while (temp > 0) {
        int digit = temp % 10;
        sum += (int)pow(digit, digits);
        temp /= 10;
    }

    return (sum == original);
}

int main() {
    int num,i;

    
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

   
    printf("\nArmstrong numbers between 1 and 1000 are:\n");
    for ( i = 1; i <= 1000; i++) {
        if (isArmstrong(i))
            printf("%d ", i);
    }
    printf("\n");

    return 0;
}
