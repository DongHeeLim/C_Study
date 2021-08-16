//구조체 비트 필드 사용

#include <stdio.h>

struct Flags{
    unsigned int a : 1;
    unsigned int b : 3;
    unsigned int c : 7;
};

int main()
{
    struct Flags f1;

    f1.a = 1;   // 0000 0001
    f1.b = 15;  // 0000 1111
    f1.c = 255; // 1111 1111

    printf("%u\n", f1.a);   //1   비트 1개
    printf("%u\n", f1.b);   //7   비트 3개
    printf("%u\n", f1.c);   //127 비트 7개

    printf("%d\n", sizeof(struct Flags));   // 4 : unsigned int

    return 0;
}