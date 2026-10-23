/*
 * Q94: Find the longest word in a sentence.
 */
#include <stdio.h>
#include <string.h>
int main() {
    char s[500], word[100], longest[100]="";
    int i=0, j=0;
    printf("Enter a sentence: ");
    fgets(s,500,stdin);
    for(i=0;;i++) {
        if(s[i]==' '||s[i]=='\n'||s[i]=='\0') {
            word[j]=0;
            if(strlen(word)>strlen(longest)) strcpy(longest,word);
            j=0;
            if(!s[i]||s[i]=='\n') break;
        } else word[j++]=s[i];
    }
    printf("Longest word: %s\n", longest);
    return 0;
}
