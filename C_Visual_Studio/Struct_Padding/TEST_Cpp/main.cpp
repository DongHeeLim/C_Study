#include <stdio.h>

struct test
{
	unsigned char a;
	unsigned int b;
	unsigned char c;

};

struct test2
{
	unsigned char a;
	unsigned int b;
	
};


int main()
{
	unsigned char cmd[17] = { 0x00, };
	unsigned char temp = 0;
	cmd[1] = 0xaa;
	cmd[2] = 0x55;
	cmd[3] = 0xaa;

	temp = cmd[1] + cmd[2] + cmd[3];

	printf("0x%X\r\n", temp);

	test t = { 1, 2, 3 };
	test2 t2 = { 1, 2 };

	printf("unsigned char = %d\n", sizeof(t.a));
	printf("unsigned char = %d\n", sizeof(t.b));
	printf("unsigned char = %d\n", sizeof(t.c));


	int len = sizeof(t);
	printf("%d\n", sizeof(t));
	printf("t狼 林家 : %x\n", &t);
	printf("t狼 林家 : %x\n", (unsigned char*) & t);
	unsigned char* pt = (unsigned char*)&t;
	for (int i = 0; i < len; i++)
		printf("0x%x ", pt[i]);
	
	printf("\n----------------\n");

	int len2 = sizeof(t2);
	unsigned char* pt2 = (unsigned char*)&t2;
	for (int i = 0; i < len2; i++)
		printf("0x%x ", pt2[i]);


	return 0;
}