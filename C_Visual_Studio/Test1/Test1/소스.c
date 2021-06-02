#include <stdio.h>
int main() {
    int score[5] = { 78,90,80,80,99 };                //점수설정
    int rank[5] = { 1,1,1,1,1 };                      //랭크 기초값설정
    int i, j;                                        //반복변수설정
    for (i = 0; i < 5; i++) {                            //2개의 반복함수 설정
        for (j = 0; j < 5; j++) {
            if (score[i] < score[j]) rank[i]++;      //score[i] 의 점수가 score[j] 보다 작을 때 랭크+1
        }
    }
    for ( i = 0; i < 5; i++) {                             //5개의 값을 모두 출력
        printf("%d=====%d\n", score[i], rank[i]);     // 스코어랑 랭크를 출력
    }
    return 0;
}