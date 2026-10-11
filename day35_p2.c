/*
 * Q70: Rotate an array to the right by k positions.
 */
#include <stdio.h>
void reverse(int a[], int l, int r) {
    while(l<r) { int t=a[l]; a[l]=a[r]; a[r]=t; l++; r--; }
}
int main() {
    int n, k, i, a[100];
    printf("Enter size and k: ");
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    k%=n;
    reverse(a,0,n-1); reverse(a,0,k-1); reverse(a,k,n-1);
    for(i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
