#include <stdio.h>
#include <string.h>

int num = 5;
int len = 100;

char* firstPalindrome(char words[][100], int wordsSize) {
    int i, j;  // loop counters local to function

    for (i = 0; i < wordsSize; i++) {
        char* s = words[i];
        int pal = 1;
        int n = strlen(s);  // length of current string

        for (j = 0; j < n / 2; j++) {
            if (s[j] != s[n - 1 - j]) {
                pal = 0;
                break;
            }
        }

        if (pal) {
            return s;  // first palindrome found
        }
    }

    return "";  // no palindrome found
}

int main() {
    // Fixed initialization: let compiler count rows, max length 100
    char words[][100] = {"abc", "car", "ada", "racecar", "cool"};
    int size = sizeof(words) / sizeof(words[0]);

    char* result = firstPalindrome(words, size);
    printf("First palindrome: %s\n", result); // Output: "ada"

    return 0;
}

