#include <stdio.h>

typedef union _Box {
    short candy;
    float snack;
    char doll[8];
}Box, *PBox;

typedef enum _BOX_TYPE {
    BOX_PAPER = 0,
    BOX_WOOD,
    BOX_PLASTIC
}BOX_TYPE, *PBOX_TYPE;

void printBox(Box box)
{
    printf("%d\n", box.candy);
}

void printBoxType(BOX_TYPE boxType)
{
    printf("%d\n", boxType);
}

int main()
{
    Box box1;
    BOX_TYPE boxType1;

    box1.candy = 10;
    boxType1 = BOX_PLASTIC;

    printBox(box1);
    printBoxType(boxType1);
}