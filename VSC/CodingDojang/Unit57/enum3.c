#include <stdio.h>

enum DayOfWeek {
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
}week;      //변수 선언

int main(){

    week = Tuesday; //3번째  0 1 2 ->  "2"열거형 값 할당

    printf("%d\n", week);

    return 0;
}