#include <stdio.h>

#define Debug
// Debug : ������ ã�Ƴ��� �ذ��ϴ� ����
// �ߴ���(break point)

int main()
{
	int k1 = 1;
	char k2 = 0xFF;
	
	//pre-processing  ��ó�� : �ʿ��� �͸� ����
	// compile ������ 
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

	a3 = a1 & a2;	// ��Ʈ ������
	a4 = a1 | a2;	// or ���ϴ� ��(1�ֱ�) 1��
	a5 = a1 && a2;	// �� ������
	a6 = ~a1 & a2;	// NAND ,  ���ϴ� ��(1) 0����
	a7 = a2 ^ a1;	// XOR, ���ϴ� ��(1) ����
	a8 = a7 ^ a1;	// XOR, ���ϴ� ��(1) ����
	a9 = a8 ^ a1;	// XOR, ���ϴ� ��(1) ����

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
	int a = 0xFF0000FF;	// 2���� <-> 16����
	int b = 0x123456;	// 2���� <-> 16����
	int c = 0x1234;	// 2���� <-> 16����
	unsigned char d = 0xFF;
	char e = 0xFF;
	
	printf("%d\n", 4);
	printf("%d\n", 5);

#endif
	
	return 0;
}