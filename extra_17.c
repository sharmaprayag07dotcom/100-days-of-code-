#include<stdio.h>
int main(){char s[200],d[200];int i;printf("Enter string: ");scanf("%s",s);for(i=0;s[i];i++)d[i]=s[i];d[i]=0;printf("Copied: %s\
",d);return 0;}
