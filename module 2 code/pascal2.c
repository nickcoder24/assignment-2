#include <stdio.h>

int i;
int nCr(int n, int r) {
    if (r == 0 || r == n)
        return 1;
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}


void printPascal(int n) {
    if (n == 0)
        return;
    printPascal(n - 1); 

    for ( i = 0; i < n; i++) {
        printf("%4d", nCr(n - 1, i));
    }
    printf("\n");
}

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    printPascal(rows);

    return 0;
}
