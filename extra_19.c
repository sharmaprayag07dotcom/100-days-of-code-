#include<stdio.h>
int main(){int n,c,i,j;printf("Enter rows: ");scanf("%d",&n);for(i=0;i<n;i++){c=1;for(j=0;j<=i;j++){printf("%d ",c);c=c*(i-j)/(j+1);}printf("\
");}return 0;}
