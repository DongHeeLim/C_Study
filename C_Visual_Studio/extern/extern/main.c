#include <stdio.h>
#include "point3d.h"

extern int num1;
extern void printNumber();
int addNumber(int);     //extern �Ƚᵵ �ٸ� �ҽ����� �Լ� ��밡��

extern int num;     

struct Point2D {
    int x;
    int y;
};

struct Point2D p1 = {.x=10, .y=20};
struct Point3D p2;  //extern �ٿ�����

void printPoint2D()
{
    printf("%d %d\n", p1.x, p1.y);
}

static void printA()    // ���� �Լ� ���� main.c ���ο����� ����
{
    printf("A\n");
}

int main()
{
    printf("%d\n", num1);    // ���� ���� num1�� �� ���. ������ ����

    printNumber();

    printf("%d\n", addNumber(5));

    printf("%d\n", num);


    //�ʱⰪ
    printf("%d %d\n", p1.x, p1.y);
    //���氪
    p1.x = 30;
    p1.y = 40;
    printPoint2D();

    printf("%.1f %.1f %.1f\n", p2.x, p2.y, p2.z);
    printA();
    return 0;
}

int num = 30;   // ���� ���Ͽ��� �ܺ�ó���ؼ� ��밡��, �� �Ⱦ�