//Convert array into asce and dec order
#include <stdio.h>

int main() {
    int a[5], i, j, t;

    // Input
    printf("Enter 5 numbers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }

    // Ascending sort
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (a[i] > a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    printf("\nAscending: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    // Descending sort
    for (i = 0; i < 5; i++) {
        for (j = i + 1; j < 5; j++) {
            if (a[i] < a[j]) {
                t = a[i];
                a[i] = a[j];
                a[j] = t;
       }
     }
    }

    printf("\nDescending: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}
