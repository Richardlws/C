#include <stdio.h>

enum Day
{
    Sun = 1,
    Mon = 2,
    Tue = 3,
    Wed = 4,
    Thu = 5,
    Fri = 6,
    Sat = 7
};

int main()
{
    // enum = a user defined type of named interger identifiers
    //       helps to make a program more readable
    enum Day today = Sun;

    // printf("%d", today); //enums are NOT STRINGS, but they can be treated as int
    for (int today = 1; today <8; today++)
    {

        if (today == 1 || today == 7)
        {
            printf("It's the weekend! Party time!\n");
        }
        else
        {
            printf("I have to work today!\n");
        }
    }

    return 0;
}