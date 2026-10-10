/*
 * Q68: Delete an element from an array.
 */
#include <stdio.h>
int main() {
    int n, i, a[100], x, found=-1;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Enter element to delete: ");
    scanf("%d",&x);
    for(i=0;i<n;i++) if(a[i]==x){found=i;break;}
    if(found<0) { printf("Element not found\n"); return 0; }
    for(i=found;i<n-1;i++) a[i]=a[i+1];
    n--;
    for(i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
