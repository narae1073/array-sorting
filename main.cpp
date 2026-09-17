#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "config.h"
#include "sortingFunctions.h"
#include "arrayUtils.h"

#define RUN_ALGO(func) showAlgorithm(#func, func)

void showAlgorithm(const char *name, void (*sortFunc)(int *, int));

int main(void)
{
    // 윈도우 콘솔의 출력을 UTF-8(65001) 형식으로 강제 변경
    // system("chcp 65001");
    // "Active code page: 65001" 메시지 지우기
    // system("cls");

    printf("hello this is array sorting example\n\n");

    RUN_ALGO(bubble);
    RUN_ALGO(selectAndSwap);

    printf("프로그램을 종료하려면 엔터(Enter)를 누르세요...!");
    getchar(); // 입력 버퍼를 비워야 할 수도 있어서 보통 2번 써줌.
    getchar();

    return 0;
}

void showAlgorithm(const char *name, void (*sortFunc)(int *, int))
{
    printf("-- %s --\n", name);

    int arr[ARRAY_LENGTH];

    randomizeIntArray(arr, ARRAY_LENGTH);

    if (ARRAY_LENGTH <= 20)
    {
        printIntArray(arr, ARRAY_LENGTH);
    }

    clock_t start = clock();
    sortFunc(arr, ARRAY_LENGTH);
    clock_t end = clock();
    
    if (ARRAY_LENGTH <= 20)
    {
        printIntArray(arr, ARRAY_LENGTH);
    }

    double duration = (double)(end - start) / CLOCKS_PER_SEC;
    printf("정렬 소요 시간: %.6f 초\n", duration);

    printf("\n");
}