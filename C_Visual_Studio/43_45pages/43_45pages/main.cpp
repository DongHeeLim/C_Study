#include <stdio.h>
#include <stdlib.h>

int main()
{
	int flag, buffer, count = 0;
	double weight, max, min;
	double sum = 0;
	double avg;

	double* weightPtr = (double*)malloc(sizeof(double)*1024);

	do
	{
		do
		{

			printf("�����Ը� �Է��Ͻÿ� : ");
			flag = 0;
			if (!scanf_s("%lf", &weight))
			{
				printf("���ڰ� �ƴմϴ�. ");
				flag = 1;
				while (buffer = getchar() != '\n');
			}
			else if(weight >200 || weight < 0){
				printf("������ �Ѿ����ϴ�. ");
				flag = 1;
			}
			else{
				if (weight != 0) {
					weightPtr[count] = weight;
					count++;
				}
				
			}

			max = weightPtr[0];
			min = weightPtr[0];
			for (int i = 0; i < count; i++)
			{
				if (max < weightPtr[i]) {
					max = weightPtr[i];
				}
				if (min > weightPtr[i]){
					min = weightPtr[i];
				}
			}

		} while (flag);

		sum += weight;

	} while (weight);

	avg = sum / count;

	printf("�ִ밪=%.2lf\n", max);
	printf("�ּҰ�=%.2lf\n", min);
	printf("��=%.2lf\n", sum);
	printf("���=%.2lf\n", avg);

	free(weightPtr);

	return 0;
}





//int number, result;
//int count = 0;

//printf("���� �Է��ϼ���: ");
//scanf_s("%d", &number);

//do
//{
//	count++;
//	result = number * count;
//	printf("%d*%d=%d\n", number, count, result);
//} while (count < 9);


//------------------------------//

//int sum = 0;
//for (int i = 1; i <= 10; i++)
//{
//	sum += i;
//}
//printf("%d\n", sum);


//------------------------------//

//int number = 0;
//scanf_s("%d", &number);
//
//printf("%d\n", factorial(number));


//------------------------------//


//for (int i = 0; i < 6; i++)
//{
//	for (int j = 0; j < 6; j++)
//	{
//		if (i >= j) printf("*");
//		else printf(" ");
//	}
//	printf("\n");
//}
//
//printf("\n");
//
//for (int i = 0; i < 6; i++)
//{
//	for (int j = 0; j < 6; j++)
//	{
//		if (i < 6 - j) printf("*");
//		else printf(" ");
//	}
//	printf("\n");
//}

//------------------------------//

//int initial = 0;
//int end = 1;
//int flag;
//int count = 0;
//
//do
//{
//	flag = 0;
//	printf("���� ���� �Է��Ͻÿ�:");
//	scanf_s("%d", &initial);
//	printf("������ �Է��Ͻÿ�:");
//	scanf_s("%d", &end);
//
//	if (initial >= end - 3) {
//		flag = 1;
//	}
//
//	if (flag == 0) {
//		for (int i = initial; i < end + 1; i++)
//		{
//			printf("%2d ", i);
//			count++;
//			if (count % 3 == 0) printf("\n");
//		}
//	}
//
//} while (flag);