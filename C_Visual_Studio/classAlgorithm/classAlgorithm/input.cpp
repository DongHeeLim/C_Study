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
		printf("���ڸ� �Է����ּ��� : ");
		if (!scanf_s("%d", &num)) {
			printf("���ڰ� �ƴմϴ�. ");
			flag = 1;
			while (buffer = getchar() != '\n');	//���ڿ��� \n ����, ; <- �״�� ������
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

