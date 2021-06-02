#include <stdio.h>

int main(){
    int a[] = {50, 30, 20, 40, 10};
 //   int a[] = {10, 20, 30, 50, 40};
    int temp;
    int cnt = 0;
    int cnt2 = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5-i; j++)
        {
            if(a[j] > a[j+1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
                cnt2++;
                
            }
            cnt++;
        }
        
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    
    printf("-> for문 횟수 : %d\n", cnt);
    printf("교체 횟수 : %d\n", cnt2);
    

    return 0;
}