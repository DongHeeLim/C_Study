#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int* data = malloc(sizeof(int)*1024);
    int numberlength = 10;
    int middlePoint = 0;
    int flag, buffer;
    int key = 0;
    int high = 10;
    int low = 1;
    int middle;
    int count = 0;

    // 숫자 10개 입력
    for (size_t i = 0; i < numberlength; i++)
    {
        do
        {
            flag = 0;
            printf("\n");
            printf("%d 번째 입력 : ", i+1);
            if(!scanf("%d", &data[i]))
            {
                
                flag = 1;
                while (buffer = getchar() != '\n' && buffer != EOF);     
            }       

        }while(flag);


    }

    // 검색할 숫자 입력
    do      
    {
        flag = 0;
        printf("\n");
        printf("검색할 숫자 입력 : ");
        if(!scanf("%d", &key))
        {
            flag = 1;
            while (buffer = getchar() != '\n' && buffer != EOF);     
        }

    }while(flag);

    for (int i = 0; i < numberlength; i++)
    {
        if(low > high)
        {   

            break;
        }
        else    //high >= low
        {   
            middle = (high + low)/2;
            count++;

            if (key < data[middle])
            {
                high = middle - 1;
            }
            else if(key > data[middle])   //key값이 중간값보다 클 때
            {
                low = middle + 1;
            }
            else
            {
                break;
            }
        }

    }
    
    
    for (int i = 0; i < numberlength; i++)
    {
        printf("%d ", data[i]);
    }

    printf("\n");
    printf("검색 횟수 : %d\n", count);

    if(low > high)
    {
        printf("답이 없습니다.");
    }
    else
    {
        printf("정답은 %d번째 : %d\n", middle+1, data[middle]);
    }

    free(data);
    return 0;
}
