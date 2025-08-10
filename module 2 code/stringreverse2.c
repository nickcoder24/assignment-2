#include <stdio.h>

// Function to find length of string without strlen()
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}


void reverseString(char str[]) {
    int start = 0;
    int end = stringLength(str) - 1;
    char temp;

    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverseString(str);
    printf("Reversed string: %s\n", str);

    return 0;
}
