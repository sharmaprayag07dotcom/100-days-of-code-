/*
 * Q57: Find the sum of array elements.
 */
#include <stdio.h>
int main() {
    int n, i, a[100], s=0;
    printf("Enter size: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) { scanf("%d",&a[i]); s+=a[i]; }
    printf("Sum = %d\n", s);
    return 0;
}
