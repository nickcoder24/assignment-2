#include <stdio.h>

void countWordsAndLongest(char str[]) {
    int i = 0, wordCount = 0, len = 0, maxLen = 0, j;
    char longest[100], temp[100];
    int tempIndex = 0;

    while (str[i] != '\0') {
        
        if (str[i] != ' ' && str[i] != '\n' && str[i] != '\t') {
            temp[tempIndex++] = str[i];
        } else {
            if (tempIndex > 0) {
                temp[tempIndex] = '\0'; 
                wordCount++;
                if (tempIndex > maxLen) {
                    maxLen = tempIndex;
                    for ( j = 0; j <= tempIndex; j++)
                        longest[j] = temp[j];
                }
                tempIndex = 0; 
            }
        }
        i++;
    }

    
    if (tempIndex > 0) {
        temp[tempIndex] = '\0';
        wordCount++;
        if (tempIndex > maxLen) {
            maxLen = tempIndex;
            for (j = 0; j <= tempIndex; j++)
                longest[j] = temp[j];
        }
    }

    printf("Total words: %d\n", wordCount);
    printf("Longest word: %s\n", longest);
}

int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    countWordsAndLongest(sentence);

    return 0;
}
