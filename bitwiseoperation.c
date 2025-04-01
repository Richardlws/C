#include <stdio.h>

int main()
{
    // BITWISE OPERATIONS = special operators used in bit level programming
    //                         (knowing binary is important for this topic)

    // & = AND
    // | = OR
    // ^ = XOR
    // << left shift
    // >> right shift

    int x = 6;  // 6  = 00000110
    int y = 12; // 12 = 00001100
    int z = 0;  // 0  = 00000000

    // z = x & y;
    // printf("AND = %d\n", z);

    //z = x | y;
    //printf("OR = %d\n", z);

    //z = x ^ y;
    //printf("XOR = %d\n", z);

    //z = x << y;
    //printf("left shift = %d\n", z);

    z = x >> y;
    printf("right shift = %d\n", z);

    return 0;
}