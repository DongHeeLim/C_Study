#include <stdio.h>
#include "count.h"

void countEven(void** ptr, int count)
{
    int count_even = 0;

    for (int i = 0; i < count; i++)
    {
        if ((int)ptr[i] % 2 == 0)
            count_even++;
    }
    printf("number of even : %d\n", count_even);
}