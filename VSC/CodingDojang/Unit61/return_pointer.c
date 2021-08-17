#include <stdio.h>
#include <stdlib.h>

int *ten()
{
    int *numPtr = malloc(sizeof(int));

    *numPtr = 10;
    printf("함수 주소 %p\n", numPtr);

    return numPtr;
}

int main()
{
    int *Ptr;

    Ptr = ten();    //같은 주소라서 이름 달라도 상관X

    printf("%d\n", *Ptr);
    printf("main 주소 %p\n", Ptr);
    
    free(Ptr);

    return 0;
}