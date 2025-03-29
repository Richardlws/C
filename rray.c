#include <stdio.h>

int main()
{
    // array = a data structure that can store many values of the same data type.

    double prices[5];

    prices[0] = 5.0;
    prices[1] = 10.0;
    prices[2] = 15.0;
    prices[3] = 25.0;
    prices[4] = 30.0;

    char name[] = "Bro";

    for (int i = 0; i <= 2; i++)
        {
            printf("%c", name[i],"\n");
        }
    return 0;
}
