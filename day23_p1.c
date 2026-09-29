/*
 * Q45: Sum of series: 2/3 + 4/7 + 6/11 + ... up to n terms.
 * Input: 4  → Output: Sum = 1.87
 */
#include <stdio.h>
int main() {
    int n, i;
    float s=0;
    printf("Enter n: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++) s+=(2.0f*i)/(4.0f*i-1);
    printf("Sum = %.2f\n", s);
    return 0;
}
