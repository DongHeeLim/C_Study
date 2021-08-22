#include <stdio.h>

#define NDEBUG      // NOT DEBUG 줆임말

int main()
{

// ndef    
#ifndef DEBUG   // DEBUG 가 정의되어있지 않을 때 코드를 컴파일   
    printf("main function\n");
#endif

    return 0;
}