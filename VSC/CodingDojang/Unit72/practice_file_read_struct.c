//  구조체 2개 바이너리 파일 읽기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#pragma pack(push, 1)
struct Point2D{
    float x;
    float y;
};
struct RectangleFileFormat{
    short magic;
    int version;
    struct Point2D p1;
    struct Point2D p2;
    char desc[30];
};
#pragma pack(pop)

int main()
{
    struct RectangleFileFormat rf;

    FILE *fp = fopen("rectangle.bin", "rb");

    fread(&rf, sizeof(rf), 1, fp);

    printf("%d\n%d\n%f, %f\n%f, %f\n%s\n", rf.magic, rf.version, rf.p1.x, rf.p1.y, rf.p2.x, rf.p2.y, rf.desc);

    fclose(fp);
    
    return 0;
}