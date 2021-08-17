#include <stdio.h>

//공용체 내용물
union Box{
    short candy;
    float snack;
    char doll[8];
};

//열거형 박스제료
enum BOX_TYPE{
    BOX_PAPER = 0,
    BOX_WOOD,
    BOX_PLASTIC
};

//내용물 캔디 반환
union Box getBox()
{
    union Box b;
    b.candy = 10;

    return b;
}

// 박스종류 나무 반환
enum BOX_TYPE getBoxType()
{
    return BOX_WOOD;
}

int main()
{
    union Box box;
    enum BOX_TYPE boxType;

    box = getBox();
    boxType = getBoxType();

    printf("%d\n", box.candy);
    printf("%d\n", boxType);

    return 0;
}