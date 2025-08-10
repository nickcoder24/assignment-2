/*Write a C program that stores 5 integers in a one-dimensional array and prints
them. */
#include <stdio.h>
int main() {
    int arr[5];
    int i;

    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}
