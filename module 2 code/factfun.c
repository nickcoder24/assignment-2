/*Write a C program that calculates the factorial of a number using a function
Include function declaration, definition, and call.*/
#include <stdio.h>

// Function declaration
void factorial(int n);

int main() {
    int num;

    printf("Enter a positive number: ");
    scanf("%d", &num);

    // Function call
    factorial(num);

    return 0;
}

// Function definition
void factorial(int n) {
    int i, f = 1;
    for (i = 1; i <= n; i++) {
        f *= i;
    }
    printf("Factorial of %d is %d\n", n, f);
}
