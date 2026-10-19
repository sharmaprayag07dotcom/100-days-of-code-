/*
 * Q86: Check if a string is a palindrome.
 */
#include <stdio.h>
#include <string.h>
int main() {
    char s[200];
    int i, len, pal=1;
    printf("Enter a string: ");
    fgets(s,200,stdin);
    len=strlen(s);
    if(s[len-1]=='\n') { s[len-1]=0; len--; }
    for(i=0;i<len/2;i++) if(s[i]!=s[len-1-i]) { pal=0; break; }
    printf("\"%s\" is %sa palindrome\n", s, pal?"":"not ");
    return 0;
}
