#include <stdio.h>

int i;
unsigned long long factorial_recursive(int n) {
    if (n <= 1)
        return 1;
    return n * factorial_recursive(n - 1);
}


unsigned long long factorial_iterative(int n) {
    unsigned long long fact = 1;
    for ( i = 1; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("\nFactorial (Recursive) of %d = %llu", num, factorial_recursive(num));
    printf("\nFactorial (Iterative) of %d = %llu\n", num, factorial_iterative(num));

    return 0;
}
