#include <stdio.h>
int main() {
    int n, t, r, sum = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    t = n;

    while (n != 0) {
        r = n % 10;
        sum += r * r * r;
        n /= 10;
    }

    if (sum == t)
        printf("%d is an Armstrong number.\n", t);
    else
        printf("%d is not an Armstrong number.\n", t);

    return 0;
}
