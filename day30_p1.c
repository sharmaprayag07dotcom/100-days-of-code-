/*
 * Q59: Count even and odd numbers in an array.
 */
#include <stdio.h>
int main() {
    int n, i, a[100], ev=0, od=0;
    printf("Enter size: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) { scanf("%d",&a[i]); if(a[i]%2==0) ev++; else od++; }
    printf("Even = %d, Odd = %d\n", ev, od);
    return 0;
}
