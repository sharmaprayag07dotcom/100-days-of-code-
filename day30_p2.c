/*
 * Q60: Count positive, negative, and zero elements in an array.
 */
#include <stdio.h>
int main() {
    int n, i, a[100], p=0, ng=0, z=0;
    printf("Enter size: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) {
        scanf("%d",&a[i]);
        if(a[i]>0) p++; else if(a[i]<0) ng++; else z++;
    }
    printf("Positive=%d, Negative=%d, Zero=%d\n", p, ng, z);
    return 0;
}
