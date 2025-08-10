#include <stdio.h>


int fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}


int fibonacci_iterative(int n) {
    int a = 0, b = 1, next, i;
    if (n == 0) return 0;
    for (i = 2; i <= n; i++) {
        next = a + b;
        a = b;
        b = next;
    }
    return b;
}

int main() {
    int n, i;

    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("\nFibonacci Sequence (Recursive):\n");
    for (i = 0; i < n; i++) {
        printf("%d ", fibonacci_recursive(i));
    }

    
    int nth_recursive = fibonacci_recursive(n - 1);
    int nth_iterative = fibonacci_iterative(n - 1);

    printf("\n\nNth Fibonacci number (Recursive) = %d", nth_recursive);
    printf("\nNth Fibonacci number (Iterative) = %d", nth_iterative);

    printf("\n\nNote: Recursive method is slower for large N because it recalculates values many times.\n");

    return 0;
}
