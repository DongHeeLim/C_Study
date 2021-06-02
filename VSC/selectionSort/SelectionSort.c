#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//미완성
int main(){

    int temp;
    int flag;
    int buffer;
    int array_score[5] = {0,};
    char* array_subject[5] =  {"국어", "영어", "수학", "과학", "사회"}; //포인터 배열 (포인터가 여러개 모인 배열)
//    printf("%s\n", array_subject[0]);
//    printf("%s\n", array_subject[1]);
    int array_size = sizeof(array_score)/sizeof(int);


    for (int i = 0; i < array_size; i++)
    {   
        do
        {
            flag = 0;
            printf("\n");
            printf("%s ", array_subject[i]);
            printf("점수를 입력해주세요 : ");
            // scanf("%d", &array_score[i]);
            // while (buffer = getchar() != '\n' && buffer != EOF);
            if(!scanf("%d", &array_score[i]))
            {
                
                flag = 1;
                while (buffer = getchar() != '\n' && buffer != EOF);        // 마지막 부분을 버퍼에  두고 \n, EOF 있으면 다음으로
            }       

        }while(flag);
    }

    for (size_t i = 0; i < array_size; i++)
    {
        printf("%s : %d \n", array_subject[i], array_score[i]);
    }
    
    




    
    
    return 0;
}
