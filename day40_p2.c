/*
 * Q80: Multiply two matrices.
 */
#include <stdio.h>
int main() {
    int r1, c1, r2, c2, i, j, k;
    int a[10][10], b[10][10], c[10][10]={0};
    printf("Enter rows and cols of A: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter rows and cols of B: ");
    scanf("%d %d",&r2,&c2);
    printf("Enter matrix A:\n");
    for(i=0;i<r1;i++) for(j=0;j<c1;j++) scanf("%d",&a[i][j]);
    printf("Enter matrix B:\n");
    for(i=0;i<r2;i++) for(j=0;j<c2;j++) scanf("%d",&b[i][j]);
    for(i=0;i<r1;i++) for(j=0;j<c2;j++) for(k=0;k<c1;k++) c[i][j]+=a[i][k]*b[k][j];
    printf("Product:\n");
    for(i=0;i<r1;i++) { for(j=0;j<c2;j++) printf("%d ",c[i][j]); printf("\n"); }
    return 0;
}
