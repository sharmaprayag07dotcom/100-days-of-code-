/*
 * Q96: Reverse each word in a sentence without changing word order.
 */
#include <stdio.h>
#include <string.h>
void reverseWord(char *s, int l, int r){while(l<r){char t=s[l];s[l]=s[r];s[r]=t;l++;r--;}}
int main() {
    char s[500];
    int i, start=0;
    printf("Enter a sentence: ");
    fgets(s,500,stdin);
    int len=strlen(s);
    if(s[len-1]=='\n') s[len-1]=0, len--;
    for(i=0;i<=len;i++) {
        if(s[i]==' '||s[i]==0) { reverseWord(s,start,i-1); start=i+1; }
    }
    printf("%s\n",s);
    return 0;
}
