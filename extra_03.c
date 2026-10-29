#include<stdio.h>
int main(){int n,a[100],i,j,mi,t;printf("Enter size: ");scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);for(i=0;i<n-1;i++){mi=i;for(j=i+1;j<n;j++)if(a[j]<a[mi])mi=j;t=a[mi];a[mi]=a[i];a[i]=t;}for(i=0;i<n;i++)printf("%d ",a[i]);printf("\
");return 0;}
