/*
 * Q25: Write a program to implement a basic calculator.
 * Input: 10 + 5  → Output: Result = 15.00
 */
#include <stdio.h>
int main() {
    float a, b;
    char op;
    printf("Enter expression (a op b): ");
    scanf("%f %c %f", &a, &op, &b);
    switch(op) {
        case '+': printf("Result = %.2f\n",a+b); break;
        case '-': printf("Result = %.2f\n",a-b); break;
        case '*': printf("Result = %.2f\n",a*b); break;
        case '/': if(b!=0) printf("Result = %.2f\n",a/b);
                  else printf("Division by zero\n"); break;
        default: printf("Invalid operator\n");
    }
    return 0;
}
