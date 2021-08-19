#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>
#include <time.h>
// #include <math.h>

int getFileSize(FILE *fp)
{
    int size;
    int currPos;
    currPos = ftell(fp);

    fseek(fp, 0,SEEK_END);
    size = ftell(fp);
    fseek(fp, currPos, SEEK_SET);

    return size;
}

//내용 출력하면서 파일 복사하는 프로세스
int main()
{
    int count;
    char buffer[5] = {0, }; // 4bytes + NULL

    FILE *src = fopen("A.txt", "r");
    FILE *dest = fopen("B.txt", "w");

    int countTime = getFileSize(src)/sizeof(buffer) + 1;
    // printf("%d\n", countTime);

    while (feof(src)==0)
    {
        //count에 넣는 이유 :  4바이트씩 읽을 때 딱 끊어지지 않아서임
        count = fread(buffer, sizeof(char), 4,src); //읽는 부분
        printf("%s", buffer);
        fwrite(buffer, sizeof(char), count, dest);  // count 읽은 만큼 쓰기
        memset(buffer, 0, 5);
        Sleep(1000);
        countTime -= 1;

        if (countTime < 0)
        {
            printf("\n");
            printf("종료\n");
            return 0;
        }
    }

    fclose(src);
    fclose(dest);
    
    return 0;
}