#include <stdio.h>


int isNumberPalindrome(int num) {
    int original = num, reversed = 0, digit;

    while (num > 0) {
        digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return (original == reversed);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isNumberPalindrome(number))
        printf("%d is a palindrome.\n", number);
    else
        printf("%d is not a palindrome.\n", number);

    return 0;
}
