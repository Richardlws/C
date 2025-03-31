#include <stdio.h>

void sort(int array[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 1; j < size; j++)
        {
            printf("\ni de %dxun huan array[i]= %d",i,array[i]);
            printf("\nj de %dxun huan array[j]= %d",j,array[j]);
            
            if (array[i] > array[j])
            {
                int temp = array[j];
                array[i] = array[j];
                array[j] = temp;
            }
        }
        printArray(array, size);
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
    // printf("\nsizeofarray is :%d", sizeof(array));
    // printf("\nsizeofarray[] is : %d", sizeof(array[0]));
    sort(array, size);
    printArray(array, size);

    return 0;
}