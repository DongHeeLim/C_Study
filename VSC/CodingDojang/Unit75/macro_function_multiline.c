// 반복 줄이기위해 매크로 사용
// 자료형의 타입에 상관없음 단순 치환
// 함수 호출에 의한 성능 저하가 일어나지않음
// 가독성 하락, 원하는 기능 구현 어려움, 디버깅 어려움

#include <stdio.h>

#define PRINT_NUM3(x) printf("%d\n", x);\
                      printf("%d\n", x+1);\
                      printf("%d\n", x+2);

int main()
{
    PRINT_NUM3(10);
    PRINT_NUM3(20);

    return 0;
}