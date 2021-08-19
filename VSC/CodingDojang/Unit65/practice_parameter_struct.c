#include <stdio.h>

typedef struct _Point2D{
    int x;
    int y;
}Point2D, *PPoint2D;

void printPoint2D(Point2D p)
{
    printf("%d %d\n", p.x, p.y);
}

int main()
{
    Point2D p1;
    
    p1.x = 10;
    p1.y = 20;

    printPoint2D(p1);

    return 0;
}