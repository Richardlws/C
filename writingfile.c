#include <stdio.h>

int main()
{
    
    FILE *pF = fopen("test.txt","a");

    fprintf(pF,"\nSpongebob Squarepants");

    fclose(pF);
    return 0;

    /*

    if (remove("test.txt") == 0)
    {
        printf("That file was deleted successfully!");
    }
    else
    {
        printf("That file was NOT deleted!");

    }
    */
}