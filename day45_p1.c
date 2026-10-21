/*
 * Q89: Count frequency of a given character in a string.
 */
#include <stdio.h>
int main() {
    char s[200], ch;
    int count=0, i;
    printf("Enter a string: ");
    fgets(s,200,stdin);
    printf("Enter character to find: ");
    scanf(" %c",&ch);
    for(i=0;s[i];i++) if(s[i]==ch) count++;
    printf("Frequency of '%c' = %d\n", ch, count);
    return 0;
}
