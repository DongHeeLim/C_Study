#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include "input.h"

void inputNumber(void** ptr, int count)
{
    int num = 0;
    int flag = 0;
    int wholesize = 0;

    do
    {
        printf("array[%d] ���� �Է��ϼ��� :", wholesize);
        scanf("%d", &num);

        (int)ptr[wholesize] = num;
        wholesize++;

        if (num == 110 | count == wholesize)
        {
            break;
        }
        else
        {
            flag = 1;
        }
    } while (flag);
}
