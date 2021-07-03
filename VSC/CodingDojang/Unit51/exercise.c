#include <stdio.h>

struct CompressHeader{
    char flags;
    int version;
};

#pragma pack(push, 1)
struct Packet{
    short length;   //or unsinged short
    int seq;
};
#pragma pack(pop)

int main(){

    struct CompressHeader header;
    struct Packet pkt;
    
    printf("%d\n", sizeof(header));
    printf("%d\n", sizeof(pkt));

    return 0;
}