// 논리 연산자 조건부 컴파일
// visual studio 컴파일 옵션에서 디버그 코드 제어
// gcc main.c -D매크로이름 또는 -D매크로이름=값

#include <stdio.h>

#define DEBUG
#define TEST
#define VERSION_11

int main()
{ 

// defined -> 논리 연산자 사용 가능   
#if (defined DEBUG || defined TEST) && !defined (VERSION_10)
    printf("Debug\n");
#endif

#if (defined DEBUG || defined TEST) && !defined VERSION_10
    printf("Debug\n");
#endif



    return 0;
}