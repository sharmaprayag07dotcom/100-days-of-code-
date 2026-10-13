/*
 * Q73: Find the sum of each row of a matrix and store it in an array.
 */
#include <stdio.h>
int main() {
    int r, c, i, j, a[10][10];
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&a[i][j]);
    for(i=0;i<r;i++) {
        int s=0;
        for(j=0;j<c;j++) s+=a[i][j];
        printf("Row %d sum = %d\n",i+1,s);
    }
    return 0;
}
