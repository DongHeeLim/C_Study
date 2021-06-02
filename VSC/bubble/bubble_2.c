#include <stdio.h>
// 필요한 수 만큼만 반복해서 오름차순 정렬 
int main(){

    int a[] = {123, 321, 543, 234, 90};
//    int a[] = {10, 20, 30, 50, 40};
    int temp;                           //교체 임시값
    int cnt = 0;                        //for문 횟수
    int cnt2 = 0;                       //교체 횟수

    for (int i = 0; i < 5; i++)        //제일 큰 수를 올리기 위한 for문
    {
        int flag = 0;                   //불꺼짐

        for (int j = 0; j < 5-i; j++)   // 제일 큰 수를 올리는 경계선 5-i
        {
            cnt++;                      //for문 횟수 한번 오름
            if(a[j]> a[j+1])            //오름차순
            {

                temp = a[j];            //교체법
                a[j] = a[j+1];
                a[j+1] = temp;
                flag = 1;               //불켜짐
                cnt2++;                 //교체 횟수 한번 오름
            }

            
        }
        if (flag == 0) break;           //더 이상 교체 못하면(불켜짐) 첫번째 for문에서 불꺼짐이라서  for문 탈출

    }
    
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);            // 배열 하나씩 출력
    }

    printf("\n");
    printf("for 문 횟수    : %d\n", cnt);
    printf("배열 교체 횟수 : %d\n", cnt2);

    return 0;
}