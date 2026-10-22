/*
 * Q92: Find the first repeating lowercase alphabet in a string.
 */
#include <stdio.h>
int main() {
    char s[200];
    int freq[26]={0}, i;
    printf("Enter a string: ");
    fgets(s,200,stdin);
    for(i=0;s[i]&&s[i]!='\n';i++) if(s[i]>='a'&&s[i]<='z') freq[s[i]-'a']++;
    for(i=0;s[i]&&s[i]!='\n';i++)
        if(s[i]>='a'&&s[i]<='z'&&freq[s[i]-'a']>1) {
            printf("First repeating: %c\n",s[i]);
            return 0;
        }
    printf("No repeating lowercase alphabet\n");
    return 0;
}
