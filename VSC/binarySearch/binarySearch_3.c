#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    int* data = malloc(sizeof(int)*1024);
    // int numberlength = 10;
    int flag, buffer;
    int key = 0;  
    int middle;
    int count = 0;
    int wholeSize = 0;
    // 

    do
    {
        flag = 0;
        
        printf("%d 번째 입력하세요.(끝내시려면 뒤에 '숫자n' 을 쓰세요) : ", wholeSize+1);
        
        if(!scanf("%d", &data[wholeSize]))  //숫자가 아닐 때 
        {
            flag = 1;
            while (buffer = getchar() != '\n' && buffer != EOF);     
        }
        else if(getchar() == 'n') // n이 입력되었을 때
        {
            flag = 0;
        }
        else    //숫자일 때
        {
            flag = 1;
        }
        
        // printf("%d\n", data[wholeSize]);

        
        wholeSize++;
    }while(flag);

    

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

    int high = wholeSize-1;
    int low = 0;

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
    for (int i = 0; i < wholeSize; i++)
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
