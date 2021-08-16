#include <stdio.h>

typedef enum _DayOfWeek {
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
}DayOfWeek;

int main(){

    DayOfWeek week;

    week = Tuesday;     //3번째  0 1 2 ->  "2"

    printf("%d\n", week);

    return 0;
}