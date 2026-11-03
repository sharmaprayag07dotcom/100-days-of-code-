#include<stdio.h>
int bs(int a[],int l,int r,int k){if(l>r)return -1;int m=(l+r)/2;return a[m]==k?m:a[m]<k?bs(a,m+1,r,k):bs(a,l,m-1,k);}
int main(){int n,a[100],k;printf("Enter size: ");scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);printf("Search: ");scanf("%d",&k);int r=bs(a,0,n-1,k);printf(r>=0?"Found at %d\
":"Not found\
",r);return 0;}
