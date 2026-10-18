/*
 * Q84: Convert a lowercase string to uppercase without built-in functions.
 */
#include <stdio.h>
int main() {
    char s[200];
    int i;
    printf("Enter a lowercase string: ");
    fgets(s,200,stdin);
    for(i=0;s[i];i++) if(s[i]>='a'&&s[i]<='z') s[i]-=32;
    printf("%s", s);
    return 0;
}
