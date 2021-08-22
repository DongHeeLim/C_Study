//static 은 파일 내에서만 사용가능
// 정적 변수는 전역이든 지역이든 default 초기값이 0
// 정적 변수는 매개변수로 사용불가능

#include <stdio.h>

void increaseNumber()
{
    // 함수가 다시 호출될 때는 값 초기화 무시
    static int num1 = 0;     // 정적 변수 선언 및 값 초기화

    printf("%d\n", num1);    // 정적 변수 num1의 값을 출력

    num1++;    // 정적 변수 num1의 값을 1 증가시킴
}

int main()
{
    increaseNumber();    // 0
    increaseNumber();    // 1
    increaseNumber();    // 2
    increaseNumber();    // 3: 정적 변수가 사라지지 않고 유지되므로 값이 계속 증가함

    return 0;
}