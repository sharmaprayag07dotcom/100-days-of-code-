/*
 * Q82: Print each character of a string on a new line.
 */
#include <stdio.h>
int main() {
    char s[200];
    int i;
    printf("Enter a string: ");
    fgets(s,200,stdin);
    for(i=0;s[i]&&s[i]!='\n';i++) printf("%c\n",s[i]);
    return 0;
}
