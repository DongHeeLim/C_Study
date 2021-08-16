// 열거형
// 적당히 많은 변수 처리

#include <stdio.h>

enum DayOfWeek {
    Sunday = 0,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main(){

    enum DayOfWeek week;

    week = Tuesday;     //3번째  0 1 2 ->  "2"

    printf("%d\n", week);

    return 0;
}