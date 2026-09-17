/*
 * Q22: Write a program to find profit or loss percentage.
 * Input: 100 120  → Output: Profit = 20.00%
 */
#include <stdio.h>
int main() {
    float cp, sp;
    printf("Enter cost price and selling price: ");
    scanf("%f %f", &cp, &sp);
    if (sp>cp) printf("Profit = %.2f%%\n",(sp-cp)/cp*100);
    else if (sp<cp) printf("Loss = %.2f%%\n",(cp-sp)/cp*100);
    else printf("No profit, no loss\n");
    return 0;
}
