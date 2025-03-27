#include <stdio.h>

int main(){

    char operator;
    double num1;
    double num2;
    double result;

    printf("\nEnter an operator (+ - * /): ");
    scanf("%c", &operator);

    printf("\nEnter numbr 1:");
    scanf("%lf", &num1);

    printf("\nEnter numbr 2:");
    scanf("%lf", &num2);

    switch(operator){
        case '+':
            result = num1 + num2;
            printf("\nThe result is %.2f", result);
            break;
        case '-':
            result = num1 - num2;
            printf("\nThe result is %.2f", result);
            break;
        case '*':
            result = num1 * num2;
            printf("\nThe result is %.2f", result);
            break;
        case '/':
            result = num1 /num2;
            printf("\nThe result is %.2f", result);
            break;
        default:
            printf("%c is not valid operator");

    }
    return 0;
}