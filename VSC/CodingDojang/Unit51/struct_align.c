#include <stdio.h>
// 데이터를 전송 효율을 높이고자 2, 4, 8, 16 바이트 단위로 데이터 전송
// 데이터 전송시 정렬하면 깨지는 자료가 생김(사진 같은 것)
//구조체는 내부의 가장 큰 자료형을 정렬 (int -> 4bytes)
#pragma pack(push, 1);  // 1byte 크기로 정렬
struct PacketHeader{
    char flags;
    int seq
};
#pragma pack(pop);      // 정렬 상태를 이전 상태로 되돌림

int main(){
    struct PacketHeader header;

    printf("%d\n", sizeof(header.flags));
    printf("%d\n", sizeof(header.seq));
    printf("%d\n", sizeof(header));     //패딩 없이 바로 메모리에 올라감
}