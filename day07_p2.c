/*
 * Q14: Write a program to check whether a character is a vowel or consonant.
 * Input: a  → Output: a is a vowel
 */
#include <stdio.h>
#include <ctype.h>
int main() {
    char c;
    printf("Enter a character: ");
    scanf(" %c", &c);
    char l = tolower(c);
    if (l=='a'||l=='e'||l=='i'||l=='o'||l=='u')
        printf("%c is a vowel\n", c);
    else
        printf("%c is a consonant\n", c);
    return 0;
}
