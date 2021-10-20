#include <stdio.h>
#include <stdlib.h>




void onlyNumber()
{
	int ptrSize = 10;
	int* numPtr = (int*)malloc(sizeof(int) * ptrSize);

	int num, flag, buffer;

	do
	{
		flag = 0;
		printf("숫자를 입력해주세요 : ");
		if (!scanf_s("%d", &num)) {
			printf("숫자가 아닙니다. ");
			flag = 1;
			while (buffer = getchar() != '\n');	//문자열은 \n 붙음, ; <- 그대로 끝내기
			//printf("%d\n", buffer); 
		}
	} while (flag);
}


//void freePtr(void* ptr, char* type) {
//	switch (type)
//	{
//	case "int":
//		ptr = (int*)ptr;
//
//	default:
//		break;
//	}
//	free(ptr);
//}

