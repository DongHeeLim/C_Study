#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	
	int binary[sizeof(long long)] = { 0, };		// 8bit
	int number = 0;
	int remainder = 0;
	int cnt = 0;
	printf("Decimal : ");
	scanf("%d", &number);			


	while (number != 0)				
	{
		remainder = number % 2;
		number /= 2;
		binary[cnt] = remainder;
		cnt++;						
	}

	

	printf("Binary  : ");	

	for (int i = sizeof(long long)-1; i >= 0; i--)		
	{
		printf("%d ", binary[i]);
	}

	return 0;

}