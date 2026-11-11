#include<stdio.h>
int main(){int n,a[100],b[100],i,j,k=0,found;printf("Enter size: ");scanf("%d",&n);for(i=0;i<n;i++)scanf("%d",&a[i]);for(i=0;i<n;i++){found=0;for(j=0;j<k;j++)if(b[j]==a[i]){found=1;break;}if(!found)b[k++]=a[i];}for(i=0;i<k;i++)printf("%d ",b[i]);printf("\
");return 0;}
