#include <stdio.h>

#define Debug
// Debug : 오류를 찾아내고 해결하는 과정
// 중단점(break point)

int main()
{
	int k1 = 1;
	char k2 = 0xFF;
	
	//pre-processing  전처리 : 필요한 것만 남김
	// compile 번역기 
	// link 

	unsigned char a1;
	unsigned char a2;
	unsigned char a3;
	unsigned char a4;
	unsigned char a5;
	unsigned char a6;
	unsigned char a7;
	unsigned char a8;
	unsigned char a9;

	a1 = 0x55;
	a2 = 0xff;

	a3 = a1 & a2;	// 비트 연산자
	a4 = a1 | a2;	// or 원하는 것(1넣기) 1로
	a5 = a1 && a2;	// 논리 연산자
	a6 = ~a1 & a2;	// NAND ,  원하는 것(1) 0으로
	a7 = a2 ^ a1;	// XOR, 원하는 것(1) 반전
	a8 = a7 ^ a1;	// XOR, 원하는 것(1) 반전
	a9 = a8 ^ a1;	// XOR, 원하는 것(1) 반전

	printf("a1 & a2 : %x\n", a3);
	printf("a1 | a2 : %x\n", a4);
	printf("a1 && a2 : %x\n", a5);
	printf("a2 & ~a1 : %x\n", a6);
	printf("a2 ^ a1 : %x\n", a7);	// aa
	printf("a7 ^ a1 : %x\n", a8);	// ff
	printf("a8 ^ a1 : %x\n", a9);	// aa
 
#ifdef Debug
	char m1 = 0xFF;
	printf("%d\n", 1);
//	printf("%d\n", 2);

#else 
	int a = 0xFF0000FF;	// 2진수 <-> 16진수
	int b = 0x123456;	// 2진수 <-> 16진수
	int c = 0x1234;	// 2진수 <-> 16진수
	unsigned char d = 0xFF;
	char e = 0xFF;
	
	printf("%d\n", 4);
	printf("%d\n", 5);

#endif
	
	return 0;
}