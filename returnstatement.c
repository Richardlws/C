#include <stdio.h>

double square(double x)
{
    
    return x * x;

}

int main()
{
    double x = square(3.14);
    printf("%.2f", x);
    return 0;   

}