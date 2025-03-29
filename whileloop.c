#include <stdio.h>
#include <string.h>

int main()
{
    // while loop = repeats a section of code possibley unlimited times.
    //WHILE some condition remains true
    // a while loop might not execute at all

    char name[25];

    printf("\nWhat's your name?: ");
    fgets(name, 25,stdin);
    name[strlen(name)-1]='\0';//把name[5]中的\n替换成\0。
    

    while(strlen(name)==0)
    {   printf("\nYou did not enter your name");
        printf("\nWhat's your name?: ");
        fgets(name,25,stdin);
        name[strlen(name)-1]='\0';
    }
    printf("Hello %s", name);

    return 0;
}