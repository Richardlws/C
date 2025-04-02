#include <stdio.h>
void printAge(int *pAge)
{

    printf("You are %d yars old\n", *pAge);//dereference

}
int main()
{
    //pointer = a "variable-like" reference that holds a memory address another varible, array, etc.
    //          some tasks are performed more easily with pointers
    //          * = indirection operator (value at address)

    int age =21;
    int *pAge = &age;

    //printf("address of age: %p\n", &age);
    //printf("value of age: %d\n", age);
    //printf("value of pAge: %p\n", pAge);
    //printf("value at stored address: %d\n",*pAge);

    
    //printf("size of age: %d bytes\n", sizeof(age));
    //printf("size of pAge: %d bytes\n", sizeof(pAge));
    printAge(pAge);

    return 0;
}