#include <stdio.h>
#include <string.h>

char* reverseVowels(char* s);
char* reverseVowels(char* s){
    int n = strlen(s);
    int i;
    char vowels[300000];
    int count = 0;
    for ( i = 0; i < n; i++) {
        char c = s[i];
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
            c=='A' || c=='E' || c=='I' || c=='O' || c=='U') 
        {
            vowels[count++] = c;
        }
    }
    for (i = 0; i < count / 2; i++) {
        char temp = vowels[i];
        vowels[i] = vowels[count - 1 - i];
        vowels[count - 1 - i] = temp;
    }
    int idx = 0;
    for (i = 0; i < n; i++) {
        char c = s[i];
        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||
            c=='A' || c=='E' || c=='I' || c=='O' || c=='U') 
        {
            s[i] = vowels[idx++];
        }
    }

    return s;
}
int main(){
	char s[30000];
	printf("Enter a string: \n");
	scanf("%s", s);
	reverseVowels(s);
	printf("%s", s);
}
