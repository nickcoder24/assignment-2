#include <stdio.h>

int isPrime(int num) {
	int i;
    if (num < 2) return 0;
    for ( i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; 
    }
    return 1; 
}

int main() {
    int N, sum = 0 ,i;

    printf("Enter a number N: ");
    scanf("%d", &N);

    printf("Prime numbers up to %d are:\n", N);
    for ( i = 2; i <= N; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
            sum += i;
        }
    }

    printf("\nSum of all prime numbers up to %d = %d\n", N, sum);

    return 0;
}

