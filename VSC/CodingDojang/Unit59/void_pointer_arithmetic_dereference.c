#include <stdio.h>

int main()
{
    int numArr[5] = {11, 22, 33, 44, 55};
    void *ptr = &numArr[2];

    printf("%d\n", *(int *)ptr);

    printf("%d\n", *((int *)ptr + 1));
    printf("%d\n", *((int *)ptr - 1));
    
    printf("%d\n", *(++(int *)ptr));
    printf("%d\n", *(--(int *)ptr));

    printf("%d\n", *((int *)ptr)++);
    printf("%d\n", *((int *)ptr)--);



    return 0;
}