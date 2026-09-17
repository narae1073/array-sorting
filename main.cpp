#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "config.h"
#include "sortingFunctions.h"
#include "arrayUtils.h"

int main(void)
{
    // 윈도우 콘솔의 출력을 UTF-8(65001) 형식으로 강제 변경
    system("chcp 65001");
    // "Active code page: 65001" 메시지 지우기
    system("cls");

    printf("hello this is array sorting example\n\n");

    int a[ARRAY_LENGTH];
    int tmp;

    // 배열 랜덤 초기화
    randomizeIntArray(a, ARRAY_LENGTH);

    // 정렬 전 배열 보기
    printf("Before Sorting: ");
    printIntArray(a, ARRAY_LENGTH);

    bubbleSort(a, ARRAY_LENGTH);

    // 정렬 후 배열 보기
    printf("After Sorting: ");
    printIntArray(a, ARRAY_LENGTH);

    printf("프로그램을 종료하려면 엔터(Enter)를 누르세요...");
    getchar(); // 입력 버퍼를 비워야 할 수도 있어서 보통 2번 써줌.
    getchar();

    return 0;
}
