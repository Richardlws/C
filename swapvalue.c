#include <stdio.h>
#include <string.h>

int main()
{
    char x[15] = "water";
    char y[15] = "soda";
    char temp[15];
    printf("Before swap:");
    printf("\nx= %s", x);
    printf("\ny= %s", y);
    // temp = x;
    // x = y;
    // y = temp;

    strcpy(temp, x);
    strcpy(x, y);
    strcpy(y, temp);
    printf("\nAfter swap:");
    printf("\nx= %s", x);
    printf("\ny= %s", y);
    return 0;
}