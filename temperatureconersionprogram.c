#include <stdio.h>
#include <ctype.h>
int main(){

    char unit;
    float temp;

    printf("\nIs the temperature in (F) or (C)?: ");
    scanf("%c", &unit);

    unit = toupper(unit);
    printf("%c", unit);
    if (unit == 'C'){
        printf("\nEnter the temp in Celsius: ");
        scanf("%f", &temp);
        temp = temp * 9 / 5 + 18;
        printf("\nThe F is :%.2f F", temp);
    }
    if (unit == 'F'){
        printf("\nEnter the temp in F: ");
        scanf("%f", &temp);
        temp = (temp -32) / (9 / 5);
        printf("\nThe temperature is: %.2f Celsius", temp);
    }
    return 0;
}