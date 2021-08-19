//실행 함수 -> 함수포인터(구조체 맴버) -> 초기값 add, sub 함수
// 코드 작성
// 1. 구현 하고자 하는 함수
// 2. 함수, 함수포인터, 변수 -> 구조체, 열거형, 공용체로 저장
// 3. 실행 함수에 매개변수, 함수 포인터로 사용
#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int sub(int a, int b)
{
    return a - b;
}

// add, sub 두 함수 포인터와 int 매개변수 2개
struct Calc{
    int (*fp[2])(int, int);    // 구조체 맴버
};

// 함수 포인터를 매개 변수로
int executer(int (*fp)(int, int), int a, int b)
{
    return fp(a, b);
}

// 반환값으로 구조체 맴버가져오기 c -> fp[index]  
// 구조체 포인터 -> index에 따른 변경한 내용을 전달하기 위해
// 일반적인 구조체는 함수의 매개변수로 사용할 경우 맴버가 복사되기 때문에
// 외부에서 입력한 값과 동일하지 않음 지역변수 역할  -> 구조체 포인터(주소)사용시 변경
// int형 반환값 자료형
// getFunc함수 이름
//함수 포인터를 반환값으로 지정
//2개의 int -> 함수 포인터의 매개변수 자료형
int (*getFunc(struct Calc *c,int index))(int, int)
{
    return c->fp[index];    // 주소 전달    (참고 65.1)
}

int main()
{
    struct Calc c = {{add, sub}};

    // 실행 (얻을 함수, 매개 변수 )
    printf("%d\n", executer(getFunc(&c, 0), 10, 20));
    printf("%d\n", executer(getFunc(&c, 1), 10, 20));

    return 0;
}