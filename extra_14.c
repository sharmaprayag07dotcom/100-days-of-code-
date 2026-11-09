#include<stdio.h>
int main(){int n;char *w[]={"","One","Two","Three","Four","Five","Six","Seven","Eight","Nine"};printf("Enter a digit (1-9): ");scanf("%d",&n);if(n>=1&&n<=9)printf("%s\
",w[n]);else printf("Out of range\
");return 0;}
