#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int prime[100];										// �Ҽ� ���� �迭
	int cnt = 0;										// ���� Ƚ��
	int input_number = 0;								// �Է��� ����
	printf("  �Է��� ���� : ");							// ���� ���ڿ�
	scanf("%d", &input_number);							// �Է��� ����
	int first_number = input_number;					// �ʱ� �Է� ����
	printf("----------------------------------\n");

	for (int i = 2; i <= input_number; i++) //�Ҽ� 2���� (�ڱ� �ڽ��� �Ҽ��� �� �� ����)
	{	
		while (input_number % i == 0)	//�Էµ� ���ڰ� �Ҽ��� ���� ������ ��
		{
			cnt++;						
			input_number /= i;			//���� �� �ִ� ���� ���� ���� ���� �������� ������ �Ҽ�(4-> 2 x 2, 6-> 2 x 3)�� ������
			prime[cnt-1] = i;
			
			printf("%3d ȸ : ������ �� %3d , �Ҽ� : %2d\n", cnt, input_number, i);	//Ƚ��, ������ ��, �Ҽ�			
		}					
	}
	printf("----------------------------------\n");
	printf("  %2d = ", first_number);

	for (int i = 0; i < cnt; i++)				// ���μ� ���� ���
	{	
		if (i == cnt-1)							//������ �Ҽ� ���
		{			
			printf("%d\n", prime[i]);		
		}
		else									//�߰� �Ҽ� ���
		{
			printf("%d x ", prime[i]);
		}
	}




	//printf("----------------------------------\n");

	//int exponent = 0;
	//int count = 0;
	//int prime_value[100];
	//
	//for (int i = 0; i < cnt; i++)				// ���μ� ���� ���
	//{

	//	if (i == cnt - 1)							//������ �Ҽ�
	//	{

	//		printf("������ �Ҽ� %d\n", prime[i]);

	//	}
	//	else									//�߰� �Ҽ�
	//	{	
	//		if (prime[i+1] == prime[i]) 
	//		{
	//			++exponent;					//���� �� �ݺ� Ƚ��
	//			printf("%d x ", prime[i]);										
	//			prime_value[count] = prime[i];
	//								
	//		}
	//		else
	//		{
	//			printf("%d x ", prime[i]);

	//		}
	//		count++;		//else �� �ݺ�Ƚ��
	//		
	//	}
	//	
	//}

	//printf("�ߺ��� ���� %d\n", prime_value[count-1]);
	//printf("���� %d\n", exponent);
	//printf("else�� %d\n", count);


	//if (exponent > 1) 
	//{
	//	printf("%d^%d", prime_value[count-1], exponent);
	//}
	//if (prime_value != 0)
	//{
	//	printf(" x ");
	//}


	return 0;
}

