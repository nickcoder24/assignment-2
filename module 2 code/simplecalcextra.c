/*Write a C program that acts as a simple calculator. The program should take two numbers
and an operator as input from the user and perform the respective operation (addition,
subtraction, multiplication, division, or modulus) using operators.
Challenge: Extend the program to handle invalid operator inputs. */
#include <stdio.h>

int main() {
    float num1, num2, result;
    char op;

    
    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op); 

    printf("Enter second number: ");
    scanf("%f", &num2);

   
    switch(op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.2f\n", result);
            break;
        case '-':
            result = num1 - num2;
            printf("Result: %.2f\n", result);
            break;
        case '*':
            result = num1 * num2;
            printf("Result: %.2f\n", result);
            break;
        case '/':
            if (num2 != 0)
                printf("Result: %.2f\n", num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        case '%':
            if ((int)num2 != 0)
                printf("Result: %d\n", (int)num1 % (int)num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Error: Invalid operator.\n");
    }

    return 0;
}
