/*
 * Q77: Check if the elements on the diagonal of a matrix are distinct.
 */
#include <stdio.h>
int main() {
    int n, i, j, a[10][10], distinct=1;
    printf("Enter size: ");
    scanf("%d",&n);
    for(i=0;i<n;i++) for(j=0;j<n;j++) scanf("%d",&a[i][j]);
    for(i=0;i<n&&distinct;i++)
        for(j=i+1;j<n&&distinct;j++)
            if(a[i][i]==a[j][j]) distinct=0;
    printf("Diagonal elements are %sdistinct\n", distinct?"":"not ");
    return 0;
}
