#include "sortingFunctions.h"

void bubbleSort(int arr[], int length)
{
    int i, j, tmp;

    for (j = 0; j < ARRAY_LENGTH; j++)
    {
        // printf("i = %d, j = %d\n", i, j);

        for (i = 0; i < ARRAY_LENGTH - (j + 1); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
            }
        }
    }
}