/*
 * Q83: Count vowels and consonants in a string.
 */
#include <stdio.h>
#include <ctype.h>
int main() {
    char s[200];
    int v=0, c=0, i;
    printf("Enter a string: ");
    fgets(s,200,stdin);
    for(i=0;s[i]&&s[i]!='\n';i++) {
        char l=tolower(s[i]);
        if(l=='a'||l=='e'||l=='i'||l=='o'||l=='u') v++;
        else if(isalpha(l)) c++;
    }
    printf("Vowels = %d, Consonants = %d\n", v, c);
    return 0;
}
