#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>      
#include <stdlib.h>     //calloc
#include <string.h>     //strlen
#include <math.h>       //pow


////////////////
//오름차순으로 정렬하여 검색
///////////////
int main(){

    //문자열을 통합하는게 아닌 변환하여 값들을 통합(일차 포인터만으로 가능)
    double* numberbox = (double*)calloc(128, sizeof(double));   
    char* text = (char*)calloc(128, sizeof(char));
    int flag, buffer, length, temp;
    int high, low, middle;
    int key = 0;  
    int count = 0;
    int wholeSize = 0;
    double sum = 0;

    //문자 -> 숫자로
    do
    {
        flag = 0;
        
        printf("%d 번째 입력하세요.(끝내시려면 'n' 을 쓰세요) : ", wholeSize+1);   
        scanf("%s", text);            //문자열 입력
        length = strlen(text);        //문자열 길이

        if(*text == 'n') flag = 0;    // 역참조 text에 'n' 이 들어가면 while문 정지 그외에는 실행
        else flag = 1; 


        sum = 0;                            //초기화

        for (int i = 0; i < length; i++)    //문자 -> 숫자
        {   
            if ((int)text[i] != 110)        //n 이 아닐때 문자를 숫자로 표현
            {
                sum += ((int)text[i] - 48)*pow(10.0, length - i -1);     //문자 '123' -> 100 + 20 + 3 = 123
            }
        }


        if ((int)text[0] == 110)            //n은 포인터에 추가하면 안됨
        {
            break;
        }

        numberbox[wholeSize] = sum;        //포인터에 넣기 (sum은 값 하나)
        wholeSize++;                       //포인터 index  <-  1 증가

    }while(flag);


    //향상된 버블 소트
    for (int i = 0; i < wholeSize; i++)                 //오름차순 정렬
    {
        for (int j = 0; j < wholeSize - i -1; j++)      //필요할 때만 바꾸기 (wholeSize -1 : 마지막 숫자 입력후 +1 되기 때문)
        {
            if(numberbox[j]> numberbox[j+1])
            {
                temp = numberbox[j];
                numberbox[j] = numberbox[j+1];
                numberbox[j+1] = temp;
            }
        }
    }
    

    // 개수, 검색목록
    printf("-------------------------------------------------\n");
    printf("전체 개수 %d (개)\n", wholeSize);
    printf("검색 목록 -> ");
    for (int i = 0; i < wholeSize; i++)
    {
        printf("%d ", (int)numberbox[i]);   // 포인터 역참조값 형변환 하여 나열
    }
    
    
    // 검색할 숫자 입력
    do      
    {
        flag = 0;
        printf("\n");
        printf("검색할 숫자 입력 : ");
        if(!scanf("%d", &key))                                    //찾을 키값 입력 (숫자만)
        {
            flag = 1;
            while (buffer = getchar() != '\n' && buffer != EOF);  //버퍼 초기화 
        }

    }while(flag);                                                 //숫자 입력할 때까지 반복

    // 이분 검색법
    high = wholeSize-1;                       // 초기 high 는 전체 사이즈 -1
    low = 0;                                  // 시작 index

    while(low <= high)                            // high가 더 클 때                     
    {
 
        middle = (high + low)/2;                  //이분법
        count++;                                  //검색 횟수

        if(key == (int)numberbox[middle]) break;  //중간값이 키값일 때

        if (key > (int)numberbox[middle])         //키값이 중간값보다 클 때
        {
            low = middle + 1;
        }
        else                                      //키값이 중간값보다 작을 때
        {
            high = middle - 1;
        }

    }

    //결과 출력
    printf("-------------------------------------------------\n");
    printf("검색 횟수 : %d\n", count);


    if(low > high)      //엇갈릴 때 답 없음
    {
        printf("답이 없습니다.\n");
    }
    else                // 답 찾았을 때 
    {
        printf("위치는 %d번째 : %d \n", middle+1, (int)numberbox[middle]);
    }

    free(text);
    free(numberbox);
    return 0;
}


//검사용
    // printf("숫자 %d\n", text[0]);
    // printf("합 : %.lf\n", sum);
    // // printf("실수 : %.0lf\n", a);

    // printf("1자리 숫자 : %d\n", text[length-1] - 48);  
    // printf("첫번째 자리 숫자 : %d\n", text[0] -48 );    


    // printf("포인터 카운트 %d\n", wholeSize);
    // printf("실수 포인터 %.0lf\n", numberbox[wholeSize]);
    // printf("하이 %d\n", high);
    // printf("로우 %d\n", low);
    // printf("미들 %d\n", middle);