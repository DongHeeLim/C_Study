#include <stdio.h>
#include "point3d.h"

extern int num1;
extern void printNumber();
int addNumber(int);     //extern 안써도 다른 소스파일 함수 사용가능

extern int num;     

struct Point2D {
    int x;
    int y;
};

struct Point2D p1 = {.x=10, .y=20};
struct Point3D p2;  //extern 붙여도됨

void printPoint2D()
{
    printf("%d %d\n", p1.x, p1.y);
}

static void printA()    // 정적 함수 현재 main.c 내부에서만 가능
{
    printf("A\n");
}

int main()
{
    printf("%d\n", num1);    // 전역 변수 num1의 값 출력. 컴파일 에러

    printNumber();

    printf("%d\n", addNumber(5));

    printf("%d\n", num);


    //초기값
    printf("%d %d\n", p1.x, p1.y);
    //변경값
    p1.x = 30;
    p1.y = 40;
    printPoint2D();

    printf("%.1f %.1f %.1f\n", p2.x, p2.y, p2.z);
    printA();
    return 0;
}

int num = 30;   // 같은 파일에서 외부처리해서 사용가능, 잘 안씀