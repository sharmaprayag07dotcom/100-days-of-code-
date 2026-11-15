#include<stdio.h>
#include<math.h>
int main(){int n;printf("Enter a number: ");scanf("%d",&n);int s=(int)sqrt(n);printf(s*s==n?"%d is a perfect square\
":"%d is not a perfect square\
",n);return 0;}
