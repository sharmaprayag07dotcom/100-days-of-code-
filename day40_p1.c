/*
 * Q79: Perform diagonal traversal of a matrix.
 */
#include <stdio.h>
int main() {
    int r, c, i, j, a[10][10];
    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);
    for(i=0;i<r;i++) for(j=0;j<c;j++) scanf("%d",&a[i][j]);
    int d, x, y;
    for(d=0;d<r+c-1;d++) {
        if(d%2==0) { x=d<r?d:r-1; y=d-x; while(x>=0&&y<c){printf("%d ",a[x][y]);x--;y++;} }
        else { y=d<c?d:c-1; x=d-y; while(y>=0&&x<r){printf("%d ",a[x][y]);x++;y--;} }
    }
    printf("\n");
    return 0;
}
