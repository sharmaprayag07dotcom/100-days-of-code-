/*
 * Q69: Find the second largest element in an array.
 */
#include <stdio.h>
#include <limits.h>
int main() {
    int n, i, a[100], mx=INT_MIN, sec=INT_MIN;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    for(i=0;i<n;i++) if(a[i]>mx) { sec=mx; mx=a[i]; } else if(a[i]>sec&&a[i]!=mx) sec=a[i];
    printf("Second largest = %d\n", sec);
    return 0;
}
