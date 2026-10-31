#include<stdio.h>
long long pw(int b,int e){return e==0?1:b*pw(b,e-1);}
int main(){int b,e;printf("Enter base and exponent: ");scanf("%d %d",&b,&e);printf("%lld\
",pw(b,e));return 0;}
