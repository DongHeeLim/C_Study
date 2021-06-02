#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int prime[100];										// 소수 저장 배열
	int cnt = 0;										// 나눈 횟수
	int input_number = 0;								// 입력한 숫자
	printf("  입력한 숫자 : ");							// 시작 문자열
	scanf("%d", &input_number);							// 입력할 숫자
	int first_number = input_number;					// 초기 입력 숫자
	printf("----------------------------------\n");

	for (int i = 2; i <= input_number; i++) //소수 2부터 (자기 자신이 소수가 될 수 있음)
	{	
		while (input_number % i == 0)	//입력된 숫자가 소수로 나눠 떨어질 때
		{
			cnt++;						
			input_number /= i;			//나눌 수 있는 가장 작은 수로 나눠 떨어지기 때문에 소수(4-> 2 x 2, 6-> 2 x 3)로 나눠짐
			prime[cnt-1] = i;
			
			printf("%3d 회 : 나눠진 값 %3d , 소수 : %2d\n", cnt, input_number, i);	//횟수, 나눠진 값, 소수			
		}					
	}
	printf("----------------------------------\n");
	printf("  %2d = ", first_number);

	for (int i = 0; i < cnt; i++)				// 소인수 분해 출력
	{	
		if (i == cnt-1)							//마지막 소수 출력
		{			
			printf("%d\n", prime[i]);		
		}
		else									//중간 소수 출력
		{
			printf("%d x ", prime[i]);
		}
	}




	//printf("----------------------------------\n");

	//int exponent = 0;
	//int count = 0;
	//int prime_value[100];
	//
	//for (int i = 0; i < cnt; i++)				// 소인수 분해 출력
	//{

	//	if (i == cnt - 1)							//마지막 소수
	//	{

	//		printf("마지막 소수 %d\n", prime[i]);

	//	}
	//	else									//중간 소수
	//	{	
	//		if (prime[i+1] == prime[i]) 
	//		{
	//			++exponent;					//같은 것 반복 횟수
	//			printf("%d x ", prime[i]);										
	//			prime_value[count] = prime[i];
	//								
	//		}
	//		else
	//		{
	//			printf("%d x ", prime[i]);

	//		}
	//		count++;		//else 문 반복횟수
	//		
	//	}
	//	
	//}

	//printf("중복인 숫자 %d\n", prime_value[count-1]);
	//printf("지수 %d\n", exponent);
	//printf("else문 %d\n", count);


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

