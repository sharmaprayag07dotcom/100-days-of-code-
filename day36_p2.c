/*
 * Q72: Find the sum of all elements in a matrix.
 */
#include <stdio.h>
int main() {
    int r, c, i, j, a[10][10], s=0;
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++) for(j=0;j<c;j++) { scanf("%d",&a[i][j]); s+=a[i][j]; }
    printf("Sum = %d\n", s);
    return 0;
}
