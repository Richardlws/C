#include <stdio.h>

int main()
{
    // memory = an array of bytes within RAM(street)
    // memeory block = a single unit (byte) within memory, used to hold some value(person)
    // memory address = the address of where a meimory block is located (house address)

    char a = 'X';
    char b = 'Y';
    char c = 'Z';

    printf("%d bytes\n", sizeof(a));
    printf("%d bytes\n", sizeof(b));
    printf("%d bytes\n", sizeof(c));

    printf("%p\n", &a);
    printf("%p\n", &b);
    printf("%p\n", &c);

    //printf("指针大小: %zu 字节\n", sizeof(void*));
    return 0;
}