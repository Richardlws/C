#include <stdio.h>

int main()
{
    //pointer = a "variable-like" reference that holds a memory address another varible,
    //          some tasks are performed more easily with pointers
    //          * = indirection operator (value at address)

    int age =21;
    int *pAge = &age;

    printf("address of age: %p\n", &age);
    printf("value of age: %p\n", pAge);

    
    printf("size of age: %d bytes\n", sizeof(age));
    printf("size of pAge: %d bytes\n", sizeof(pAge));


    return 0;
}