/*
 * Q56: Read and print elements of a one-dimensional array.
 */
#include <stdio.h>
int main() {
    int n, i, a[100];
    printf("Enter size: ");
    scanf("%d", &n);
    printf("Enter elements: ");
    for(i=0;i<n;i++) scanf("%d",&a[i]);
    printf("Array: ");
    for(i=0;i<n;i++) printf("%d ",a[i]);
    printf("\n");
    return 0;
}
