/*
 * Q87: Count spaces, digits, and special characters in a string.
 */
#include <stdio.h>
#include <ctype.h>
int main() {
    char s[200];
    int sp=0, dg=0, sc=0, i;
    printf("Enter a string: ");
    fgets(s,200,stdin);
    for(i=0;s[i]&&s[i]!='\n';i++) {
        if(s[i]==' ') sp++;
        else if(isdigit(s[i])) dg++;
        else if(!isalpha(s[i])) sc++;
    }
    printf("Spaces=%d, Digits=%d, Special=%d\n", sp, dg, sc);
    return 0;
}
