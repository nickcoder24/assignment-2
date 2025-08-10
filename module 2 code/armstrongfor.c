#include <stdio.h>
int main() {
    int n, t, r, sum = 0;

    printf("Enter a three-digit number: ");
    scanf("%d", &n);

    t = n;

    for (; n != 0; n /= 10) {
        r = n % 10;
        sum += r * r * r;
    }

    if (sum == t)
        printf("%d is an Armstrong number.\n", t);
    else
        printf("%d is not an Armstrong number.\n", t);

    return 0;
}
