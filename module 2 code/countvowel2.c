#include <stdio.h>

int main() {
    char str[200];
    int vowels = 0, consonants = 0, digits = 0, specials = 0;
    int i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); 

    while (str[i] != '\0') {
        char ch = str[i];

        
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            vowels++;
        }
        
        else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            consonants++;
        }
        
        else if (ch >= '0' && ch <= '9') {
            digits++;
        }
        
        else if (ch != '\n' && ch != ' ') {
            specials++;
        }
        i++;
    }

    printf("Vowels: %d\n", vowels);
    printf("Consonants: %d\n", consonants);
    printf("Digits: %d\n", digits);
    printf("Special Characters: %d\n", specials);

    return 0;
}
