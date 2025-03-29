
#include <stdio.h>

int main()
{

    //while loop = checks a condition, THEN executes a block of code if condition is true
    //do while loop = always executes a block of code once, THEN checks a condition

    int number = 0;
    int sum = 0;
    int looptimes = 0;
    do{
        printf("Enter a # above 0:");
        scanf("%d", &number);
        //if (number > 0)
        //{
            sum += number;
            looptimes +=1;
        //}
    }while(number > 0);
    printf("do while sum is %d\n", sum);
    printf("looptimes: %d\n",looptimes);

    int a = 0;
    int b = 0;
    int i = 0;
    while (a>=0)
    {
        printf("Enter a # above 0:");
        scanf("%d", &a);
        //if (a > 0)
        //{
            b += a;
            i+=1;
        //}
    }
    printf("while sum is %d\n",b);
    printf("looptimes: %d\n",looptimes);
    return 0;

}  