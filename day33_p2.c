/*
 * Q66: Insert an element in a sorted array at the appropriate position.
 */
#include <stdio.h>
int main() {
    int n, i, j, a[101], x;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter element to insert: ");
    scanf("%d",&x);
    for(i=0;i<n&&a[i]<x;i++);
    for(j=n;j>i;j--) a[j]=a[j-1];
    a[i]=x; n++;
    for(i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
