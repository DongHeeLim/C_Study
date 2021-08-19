#include <stdio.h>
#include <stdlib.h>

typedef struct _Point2D{
    int x;
    int y;
} Point2D, *PPoint2D;

void setPoint2D(PPoint2D p, int x, int y)
{
    p->x = x;
    p->y = y;
}

int main()
{
    PPoint2D p1 = malloc(sizeof(Point2D));

    setPoint2D(p1, 10, 20);

    printf("%d %d\n", p1->x, p1->y);

    free(p1);
    
    return 0;
}