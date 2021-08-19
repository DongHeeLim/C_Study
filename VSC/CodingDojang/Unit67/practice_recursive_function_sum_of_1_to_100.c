// 피보나치 수열같이 알고리즘 그래도인 것
// 점화식 스타일
// 변수 사용 줄일 수 있음
// 스택 쌓이는 경우 조심

#include <stdio.h>

int sum(int n)
{
    if(n == 100)
        return 100;
    
    return n + sum(n+1);
}

int main()
{
    printf("%d\n", sum(1));

    return 0;
}