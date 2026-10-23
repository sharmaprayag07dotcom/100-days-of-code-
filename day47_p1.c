/*
 * Q93: Check if two strings are anagrams of each other.
 */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char a[200], b[200];
    int fa[26]={0}, fb[26]={0}, i, anagram=1;
    printf("Enter first string: ");
    fgets(a,200,stdin);
    printf("Enter second string: ");
    fgets(b,200,stdin);
    for(i=0;a[i]&&a[i]!='\n';i++) if(isalpha(a[i])) fa[tolower(a[i])-'a']++;
    for(i=0;b[i]&&b[i]!='\n';i++) if(isalpha(b[i])) fb[tolower(b[i])-'a']++;
    for(i=0;i<26;i++) if(fa[i]!=fb[i]) { anagram=0; break; }
    printf("Strings are %sanagrams\n", anagram?"":"not ");
    return 0;
}
