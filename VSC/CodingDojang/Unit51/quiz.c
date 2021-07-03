#include <stdio.h>
#include <stddef.h>

struct PacketHeader{
    char flags;
    int seq;
};

struct PacketHeader2{
    char flags;
    int seq;
};

int main(){

    struct PacketHeader header;

    printf("%d\n", sizeof(header));
    printf("%d\n", sizeof(struct PacketHeader));
    printf("%d\n", sizeof header);

    return 0;
}