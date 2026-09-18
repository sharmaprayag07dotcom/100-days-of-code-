/*
 * Q24: Write a program to calculate electricity bill.
 * Input: 200  → Output: Bill = Rs. 350.00
 */
#include <stdio.h>
int main() {
    int u;
    float bill;
    printf("Enter units consumed: ");
    scanf("%d", &u);
    if (u<=100) bill=u*1.5;
    else if (u<=300) bill=100*1.5+(u-100)*2.0;
    else bill=100*1.5+200*2.0+(u-300)*3.0;
    printf("Bill = Rs. %.2f\n", bill);
    return 0;
}
