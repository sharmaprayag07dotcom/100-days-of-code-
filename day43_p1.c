/*
 * Q85: Reverse a string.
 */
#include <stdio.h>
#include <string.h>
int main() {
    char s[200];
    int i, len;
    printf("Enter a string: ");
    fgets(s,200,stdin);
    len=strlen(s);
    if(s[len-1]=='\n') { s[len-1]=0; len--; }
    for(i=0;i<len/2;i++) { char t=s[i]; s[i]=s[len-1-i]; s[len-1-i]=t; }
    printf("%s\n", s);
    return 0;
}
