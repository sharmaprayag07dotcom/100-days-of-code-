#include<stdio.h>
int main(){char a[200],b[200];int i;printf("Enter two strings: ");scanf("%s %s",a,b);for(i=0;a[i]&&b[i]&&a[i]==b[i];i++);printf(a[i]==b[i]?"Equal\
":"Not equal\
");return 0;}
