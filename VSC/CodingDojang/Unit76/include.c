#include <stdio.h>

#define NDEBUG
#define KO  //KO 매크로 정의

#ifdef DEBUG
#include "debug_message.h"
#else
#include "message.h"
#endif

int main()
{
    printf("%s\n", HELLO_MESSAGE);

    return 0;
}