// ## 사용하여 여러 코드(값) 을 붙일 수 있다.

#include <stdio.h>

#define EXECUTER(x) hello##x()

void hello1()
{
    printf("hello 1\n");
}

void hello2()
{
    printf("hello 2\n");
}

int main()
{
    EXECUTER(1);
    EXECUTER(2);

    return 0;
}