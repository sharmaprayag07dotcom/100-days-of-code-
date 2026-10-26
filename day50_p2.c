/*
 * Q100: Print all sub-strings of a string.
 */
#include <stdio.h>
#include <string.h>
int main() {
    char s[200];
    int i, j, len;
    printf("Enter a string: ");
    scanf("%s",s);
    len=strlen(s);
    printf("All substrings:\n");
    for(i=0;i<len;i++)
        for(j=i+1;j<=len;j++) {
            char sub[200];
            strncpy(sub,s+i,j-i);
            sub[j-i]=0;
            printf("%s\n",sub);
        }
    return 0;
}
