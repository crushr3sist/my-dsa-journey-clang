#include <stdio.h>

int bubbleSort(int *array, int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (array[j] > array[j + 1])
            {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main()
{
    // Your code here
    int arrayToSort[10] = {12, 32, 4, 154, 5, 2, 5, 12, 55, 22};
    int *sortedArray = bubbleSort(arrayToSort, 10);

    for (int i = 0; i < 10; i++)
    {
        printf("%d,", arrayToSort[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d,", sortedArray[i]);
    }
    return 0;
}
