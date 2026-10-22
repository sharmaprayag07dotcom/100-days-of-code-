/*
 * Q91: Remove all vowels from a string.
 */
#include <stdio.h>
#include <ctype.h>
int main() {
    char s[200], r[200];
    int i, j=0;
    printf("Enter a string: ");
    fgets(s,200,stdin);
    for(i=0;s[i]&&s[i]!='\n';i++) {
        char l=tolower(s[i]);
        if(l!='a'&&l!='e'&&l!='i'&&l!='o'&&l!='u') r[j++]=s[i];
    }
    r[j]=0;
    printf("%s\n", r);
    return 0;
}
