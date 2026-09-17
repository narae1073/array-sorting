#include "sortingFunctions.h"
#include "arrayUtils.h"

void bubble(int arr[], int length)
{
    for (int j = 0; j < length; j++)
    {
        // printf("i = %d, j = %d\n", i, j);
        int swapped = 0;

        for (int i = 0; i < length - (j + 1); i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(&arr[i], &arr[i + 1]);
                swapped = 1;
            }
        }

        if (swapped == 0) {
            break;
        }
    }
}

void selectAndSwap(int arr[], int length)
{
    for (int i = 0; i < length - 1; i++)
    {
        int argmin = i;
        // printf("loop %d\n", i);

        for (int j = i + 1; j < length; j++)
        {
            if (arr[j] < arr[argmin])
            {
                // printf("min = %d\n", min);
                argmin = j;
            }
        }

        if (i != argmin)
        {
            swap(&arr[i], &arr[argmin]);
        }
    }
}