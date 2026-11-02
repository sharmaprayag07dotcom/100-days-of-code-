#include<stdio.h>
int sum(int a[],int n){return n==0?0:a[n-1]+sum(a,n-1);}
int main(){int n,a[100];printf("Enter size: ");scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);printf("Sum = %d\
",sum(a,n));return 0;}
