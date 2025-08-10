#include <stdio.h>

int main() {
    int i, j;
    int n = 7; // height of pyramid

    for (i = 1; i <= n; i++) {
        // Print spaces first (to push stars to the right)
        for (j = 1; j <= n - i; j++) {
            printf("  "); // double space for alignment
        }
        // Print stars
        for (j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
