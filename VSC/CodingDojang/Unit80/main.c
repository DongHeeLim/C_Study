#include <stdio.h>

//argc 매개변수 옵션의 개수  cmd에 입력받은 개수
//*argv[] 문자열의 배열
int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    printf("argc : %d\n", argc);    //아마도 실행파일 때문에 한개는 기본인듯
    
    return 0;
}

//cmd 에서  main.c Hello C Language