/*
 * Q76: Check if a matrix is symmetric.
 */
#include <stdio.h>
int main() {
    int n, i, j, a[10][10], sym=1;
    printf("Enter size (square): ");
    scanf("%d",&n);
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&a[i][j]);
    for(i=0;i<n&&sym;i++) for(j=0;j<n&&sym;j++) if(a[i][j]!=a[j][i]) sym=0;
    printf("Matrix is %ssymmetric\n", sym?"":"not ");
    return 0;
}
