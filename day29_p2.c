/*
 * Q58: Find the maximum and minimum element in an array.
 */
#include <stdio.h>
int main() {
    int n, i, a[100];
    printf("Enter size: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    int mn=a[0], mx=a[0];
    for(i=1;i<n;i++) { if(a[i]>mx) mx=a[i]; if(a[i]<mn) mn=a[i]; }
    printf("Max = %d, Min = %d\n", mx, mn);
    return 0;
}
