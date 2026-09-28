/*
 * Q44: Sum of series: 1 + 3/4 + 5/6 + ... up to n terms.
 * Input: 3  → Output: Sum = 2.58
 */
#include <stdio.h>
int main() {
    int n, i;
    float s=0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) s+=(float)(2*i+1)/(2*i+2);
    printf("Sum = %.2f\n", s);
    return 0;
}
