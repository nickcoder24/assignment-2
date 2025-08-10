#include <stdio.h>

int main() {
    int n, i;
    float sum = 0, avg;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    int arr[n]; 

  
    for (i = 0; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i]; 
    }

   
    avg = sum / n;

   
    printf("\nSum of all elements: %.2f", sum);
    printf("\nAverage of all elements: %.2f", avg);

    return 0;
}
