#include <stdio.h>
int main() {
    char c;
    int vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);
    vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');
    if (vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    return 0;
}