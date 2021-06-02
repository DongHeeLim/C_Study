#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 한개를 뒤에 것들과 비교

int main(){

    int temp;
    int score[5];
    for (int i = 0; i < 5; i++)         //숫자 5개 입력
    {
        scanf("%d", &score[i]);
    }
    
    for (int i = 0; i < 4; i++)         // 제일 앞에꺼는 4번만 보면 됨
    {
        for (int j = i+1; j < 5; j++)   // 그 다음 숫자는 한칸 뒤    
        {
            if (score[i]> score[j])       //  앞쪽에 큰거 있으면  뒤 작은 것과 자리바꿈
            {
                temp = score[i];
                score[i] = score[j];
                score[j] = temp;

            } 
        }
    }
    
    for (int i = 0; i < 5; i++)         //출력
    {
        printf("%d ", score[i]);
    }
    
    return 0;
}