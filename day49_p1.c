/*
 * Q97: Print the initials of a name.
 * Input: John Smith → Output: J. S.
 */
#include <stdio.h>
int main() {
    char s[200];
    int i;
    printf("Enter name: ");
    fgets(s,200,stdin);
    if(s[0]) printf("%c.", s[0]);
    for(i=1;s[i]&&s[i]!='\n';i++) if(s[i]==' '&&s[i+1]&&s[i+1]!='\n') printf(" %c.",s[i+1]);
    printf("\n");
    return 0;
}
