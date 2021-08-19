// 함수 포인터를 parameter, return 값으로 사용

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

void executer(int (*fp)(int, int))  // 함수포인터를 매개변수로 지정
{
    printf("%d\n", fp(10, 20));     //매개변수로써 함수 호출
}

int main()
{
    executer(add);  //호출 시 add함수 메모리 주소 전달

    //풀어쓰기
    // int (*fp)(int, int);
    // fp = add;
    // excuter(fp);

    return 0;
}