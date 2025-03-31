#include <stdio.h>

void swapvalue(int array[],int i,int j)
{
    int temp = array[i];
    array[i] = array[j];
    array[j] = temp;
}

void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] < array[j])
            {
                swapvalue(array,i,j);
                //int temp = array[i];
                //array[i] = array[j];
                //array[j] = temp;
            }
        }
    }
}

void printArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", array[i]);
    }
}
int main()
{

    int array[] = {9, 1, 8, 2, 7, 3, 6, 4, 5};
    int size = sizeof(array) / sizeof(array[0]);

    sort(array, size);
    printArray(array, size);

    return 0;
}