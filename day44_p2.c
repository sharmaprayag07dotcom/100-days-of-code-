/*
 * Q88: Replace spaces with hyphens in a string.
 */
#include <stdio.h>
int main() {
    char s[200];
    int i;
    printf("Enter a string: ");
    fgets(s,200,stdin);
    for(i=0;s[i];i++) if(s[i]==' ') s[i]='-';
    printf("%s", s);
    return 0;
}
