// 메모리 대신 CPU의 레지스터 사용
// 레지스터 변수는 반복 횟수가 매우 많을 때 유용

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    // double start, end;
    // start = (double)clock()/CLOCKS_PER_SEC;

    register int num1 = 10;
    printf("%d\n", num1);   
    // 레지스터 변수는 CPU 레지스터만 사용하므로 주소를 못구함

    register int *numPtr = malloc(sizeof(int));
    *numPtr = 20;
    printf("%d\n", *numPtr);
    // 레지스터 변수에 메모리 주소는 저장할 수 있음
    free(numPtr);

    register int i, j;
    for (i = 0; i < 1000; i++)
    {
        for (j = 0; j < 100; j++)
        {
            printf("a");
        }
    }

    // end = (double)clock()/CLOCKS_PER_SEC;
    // printf("수행 시간: %lf\n", end-start);

    return 0;
}

