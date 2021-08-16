#include <stdio.h>

struct Flags{
    union{
        struct{
            unsigned short a : 3;   //3
            unsigned short b : 2;   //5
            unsigned short c : 7;   //12
            unsigned short d : 4;   //16
        };  // 전체 사이즈 2bytes = 16bits
        unsigned short e;
    };
};

int main()
{
    struct Flags f1 = {0, };

    f1.a = 4;   //  0100
    f1.b = 2;   //  0010
    f1.c = 80;  //  0101 0000
    f1.d = 15;  //  1111

    printf("%u\n", f1.e);   // 1111 1010000 10 100

    return 0;
}