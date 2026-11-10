#include<stdio.h>
int main(){int n,a[100],i,asc=1,desc=1;printf("Enter size: ");scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);for(i=1;i<n;i++){if(a[i]<a[i-1])asc=0;if(a[i]>a[i-1])desc=0;}printf(asc?"Ascending\
":desc?"Descending\
":"Not sorted\
");return 0;}
