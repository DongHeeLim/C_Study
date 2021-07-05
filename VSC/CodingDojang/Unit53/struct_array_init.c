#include <stdio.h>

struct Point2D{
    int x;
    int y;
};

int main(){

    struct Point2D p1[3] = {{.x=10, .y=20}, {.x=30, .y=40}, {.x=50, .y=60}};

    printf("%d %d\n", p1[0].x, p1[0].y);
    printf("%d %d\n", p1[1].x, p1[1].y);
    printf("%d %d\n", p1[2].x, p1[2].y);

    struct Point2D p2[3] = {{11, 22}, {33, 44}, {55, 66}};

    printf("%d %d\n", p2[0].x, p2[0].y);
    printf("%d %d\n", p2[1].x, p2[1].y);
    printf("%d %d\n", p2[2].x, p2[2].y);

    return 0;
}