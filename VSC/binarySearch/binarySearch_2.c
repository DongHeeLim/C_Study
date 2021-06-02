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
    int high = numberlength-1;
    int low = numberlength -10;
    int middle;
    int count = 0;

    // 숫자 10개 입력
    for (size_t i = 0; i < numberlength; i++)
    {
        do
        {
            flag = 0;
            
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

    while(low <= high)
    {
 
        middle = (high + low)/2;
        count++;

        if(key == data[middle]) break;

        if (key > data[middle])
        {
            low = middle + 1;
        }
        else   //key값이 중간값보다 클 때
        {
            high = middle - 1;
        }

    }
    

    printf("\n");
    printf("검색 목록 -> ");
    for (int i = 0; i < numberlength; i++)
    {
        printf("%d ", data[i]);
    }


    printf("\n");
    printf("검색 횟수 : %d\n", count);


    if(low > high)
    {
        printf("답이 없습니다.\n");
    }
    else
    {
        printf("정답은 %d번째 : %d\n", middle+1, data[middle]);
        // printf("정답은 %d\n", middle);
    }

    free(data);
    return 0;
}
