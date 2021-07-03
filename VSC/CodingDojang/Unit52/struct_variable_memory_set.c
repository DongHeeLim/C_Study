#include <stdio.h>
#include <string.h> //memset 함수 선언 헤더 파일

struct Point2D{
    int x;
    int y;
};

int main(){
    struct Point2D p1;

    memset(&p1, 0, sizeof(struct Point2D)); //구조체 크기만크 0으로 설정

    printf("%d %d\n", p1.x, p1.y);
    
    return 0;
}