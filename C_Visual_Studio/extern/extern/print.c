#include <stdio.h>
#include "point3d.h"

int num1 = 10;

struct Point3D p2 = { 1.0f, 2.0f, 3.0f };

void printNumber()
{
    printf("%d\n", num1);    // ���� ���� num1�� �� ���
}

int addNumber(int num2)
{
    return num1 + num2;
}