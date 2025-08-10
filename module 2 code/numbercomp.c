/*Write a C program that takes three numbers from the user and determines:
o The largest number.
o The smallest number.
• Challenge: Solve the problem using both if-else and switch-case statements*/
#include <stdio.h>

int main() {
    int a, b, c;
    int largest, smallest;

    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

   
    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    if (a <= b && a <= c)
        smallest = a;
    else if (b <= a && b <= c)
        smallest = b;
    else
        smallest = c;

    printf("\nUsing if-else:\n");
    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

   
    switch(0) { 
        case 0:
            largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
            smallest = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);

            printf("\nUsing switch-case:\n");
            printf("Largest = %d\n", largest);
            printf("Smallest = %d\n", smallest);
            break;
    }

    return 0;
}
