#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#include "arrayUtils.h"

void printIntArray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n\n");
}

void randomizeIntArray(int arr[], int length)
{
    srand((unsigned int)time(NULL));

    // 2. 반복문을 돌며 배열에 랜덤 값 넣기
    for (int i = 0; i < length; i++)
    {
        // rand() % 100 은 0 ~ 99까지 나옵니다.
        // 여기에 + 1을 하면 1 ~ 100 사이의 숫자가 됩니다.
        arr[i] = (rand() % 100) + 1;
    }
}

void swap(int *a, int *b)
{
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

