#include <stdio.h>

int main()
{
    // array = a data structure that can store many values of the same data type.

    double prices[6];

    prices[0] = 5.0;
    prices[1] = 10.0;
    prices[2] = 15.0;
    prices[3] = 20.0;
    prices[4] = 25.0;
    prices[5] = 30.0;

    // printf("%d bytes\n", sizeof(prices));

    char name[] = "Bro";

    for (int i = 0; i < sizeof(prices) / sizeof(prices[0]); i++)
    {
        printf("$%.2lf\n", prices[i]);
    }

    return 0;
}
