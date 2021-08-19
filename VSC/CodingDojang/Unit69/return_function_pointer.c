// 함수 포인터 
//고정된 형태가 아닌 데이터 형태로 취급가능

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

// int *getAdd(){} 반환값이 포인터(주소)인 함수 -> 함수 포인터
// 반환값이 함수 포인터(자료형 int)인 함수
int (*getAdd(int x, int y))(int, int)
{
    printf("%d %d\n", x, y);
    return add; // add 함수의 메로리 주소를 반환
}

int main()
{
    // int (*fp)(int, int);
    // fp = getAdd();  // 반환값을 함수포안터 fp에 저장
    // printf("%d\n", fp(10, 20));   

    // getAdd를 호출한 뒤 반환값으로 add 함수 호출
    printf("%d\n", getAdd(1, 2)(10, 20));   

    return 0;
}