#include <stdio.h>
//0, 4, 8, 12  -> 9~12, 최대 크기가 4(int)이여야함, 8이면 9일떄 16됨
struct EncryptionHeader{
    char flags;
    char directions;   
    int gages;
    int numbers;
};

int main(){
    struct EncryptionHeader header;
    printf("%d\n", sizeof(header));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(long long));
    printf("%d\n", sizeof(unsigned short));
    return 0;
};