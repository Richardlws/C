#include <stdio.h>
#include <string.h>

int main()
{
    char cars[][10] = {"Mustang", "covertte", "Camaro"};

    // cars[0] = "Tesla";

    strcpy(cars[0], "Tesla");

    for (int i = 0; i < sizeof(cars) / sizeof(cars[0]); i++)

    {
        printf("%s\n", cars[i]);
    }

    printf("\nsizeofcars:%d " ,sizeof(cars));
    printf("\nsizeofcars[0]:%d ",sizeof(cars[0]));
    return 0;
}