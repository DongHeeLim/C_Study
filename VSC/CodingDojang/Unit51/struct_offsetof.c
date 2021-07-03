#include <stdio.h>
#include <stddef.h>

struct PacketHeader{
    char flags;
    int seq;
};

int main(){
    struct PacketHeader Header;
    printf("flags : %d\n", sizeof(Header.flags));
    printf("seq : %d\n", sizeof(Header.seq));
    printf("Header :%d\n", sizeof(Header));
    printf("PacketHeader : %d\n", sizeof(struct PacketHeader));
    // 4byte 단위로 정렬
    printf("%d\n", offsetof(struct PacketHeader, flags));   // 상대위치 0
    printf("%d\n", offsetof(struct PacketHeader, seq));     //상대 위치 4
}