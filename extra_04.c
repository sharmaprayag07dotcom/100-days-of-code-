#include<stdio.h>
int main(){int n,a[100],i,j,k;printf("Enter size: ");scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);for(i=1;i<n;i++){k=a[i];for(j=i-1;j>=0&&a[j]>k;j--)a[j+1]=a[j];a[j+1]=k;}for(i=0;i<n;i++)printf("%d ",a[i]);printf("\
");return 0;}
