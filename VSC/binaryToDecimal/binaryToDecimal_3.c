#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>     // strlen
#include <stdlib.h>     // malloc, free
#include <math.h>       // pow

int main(){

    char* binary;
    binary = malloc(sizeof(char)*1024);
    int* binaryToDecimal;
    binaryToDecimal = malloc(sizeof(int)*1024);

    int flag = 0;       //while 문 지속
    int count = 0;      //0,1만으로 이뤄졌는지 확인용 횟수
    int subscript;      //첨자
    double exponent;    //지수
    int binaryCount = 0;
    int decimal = 0;


    printf("---------------------------\n");


    do{
        printf("이진수를 입력하세요 : ");
        count = 0;
        scanf("%s", binary);                    // 입력
        int length = strlen(binary);            // 입력된 포인터 문자열의 길이
 

        for (int i = 0; i < length; i++)
        {
            if (binary[i] != '0' && binary[i] != '1')   //0,1 아니면 처음부터 다시 입력
            {
                flag = 1;
                break;                                  
            }
            count++;                                    //확인된 문자열 길이만큼 +1
        }

        if(length == count)   // 입력받은 문자열 길이랑 확인 횟수 같으면 다음으로 진행
        {
            flag = 0;
        }


    }while(flag);


    printf("---------------------------\n");


    for (int i = 0; i < count; i++)
    {

        subscript = count - i;          // 첨자 자리
        exponent = subscript - 1;       // 첨자 위치에 따른 지수 계산
        
        binaryToDecimal[subscript] = ((int)binary[i] - 48) * pow(2.0, exponent);     // 거듭제곱 계산

        decimal += binaryToDecimal[subscript];                                     // 거듭제곱 합

        if(binary[i] == '1')        // 이진법의 1의 갯수
            binaryCount++;


        if(binary[i] - 48 != 0)                 //이진수 표현식에서 1 찾아냄
        {   
            if (binaryCount > 1)                // 1이 2개 이상부터 + 추가  
                printf("+ ");

            if(exponent != 0)                   // 마지막 자리 이외에 나머지는 지수형 : 2^()로 표현
                printf("2^%.0f ", exponent);
            else                                // 마지막 자리는 2^0 = 1
                printf("1");               
//              printf("2^%.0f", exponent);     2^0 표현
        }
    }

    
    printf(" = %d\n", decimal);
    printf("--------------------------\n");
    printf("십진수 결과 값 : %d\n", decimal);

    free(binary);               //동적 할당 해제
    free(binaryToDecimal);      //동적 할당 해제

    return 0;
}

//       검사용
//       printf("길이 : %d\n", length);
//       printf("횟수 : %d\n", count);
//       printf("문자 : %s\n", binary);
//       printf("전체 횟수 : %d\n", count);

//       printf("%d", binary[i]-48);
//       printf("밑   %.0f\n", 2.0*((int)binary[i] - 48));
//       printf("지수 %.0f\n", exponent);
//       printf("%d\n", binaryToDecimal[subscript]);
//       printf("1 의 갯수%d\n", binaryCount);