/*
 * Q67: Insert an element in an array at a given position.
 */
#include <stdio.h>
int main() {
    int n, i, a[101], x, pos;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter element and position: ");
    scanf("%d %d",&x,&pos);
    for(i=n;i>=pos;i--) a[i]=a[i-1];
    a[pos-1]=x; n++;
    for(i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
