#include <stdio.h>

#define f(x) #x

typedef enum _DayOfWeek{
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday,
    DayOfWeekCount
} DayOfWeek;

int main()
{
    char* test;
    test = f(Monday);
    printf("%s\n", test);

    for (DayOfWeek i = Sunday; i < DayOfWeekCount; i++)
    {       
        printf("%d\n", i);
    }
    
    return 0;
}