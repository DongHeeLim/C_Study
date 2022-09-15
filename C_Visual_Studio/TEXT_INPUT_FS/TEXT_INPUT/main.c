#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

typedef struct _node {
	char objectName[11];
	int age;
}node;

int main(void) {

	FILE* input;
	char m;
	
	input = fopen("test.txt", "r");
	while (1)
	{
		m = fgetc(input);
		if (feof(input)) break; // end of file
		else printf("%c", m);
	}
	printf("\n");
	fclose(input);

	FILE* input2;
	char strText[100];
	input2 = fopen("test.txt", "r");
	fgets(strText, 100, input2);	// ���پ�
	printf("%s\n", strText);
	fclose(input2);
	
	printf("=====================================\n");

	FILE* input3;
	input3 = fopen("test2.txt", "r");
	char name[20];
	int score, value, total;
	char* input3buffer;
	int size;
	int count;
	
	fseek(input3, 0 , SEEK_END);	// �� ��ġ
	size = ftell(input3);	// ������ ���ڿ� ũ��	(NULL ����)

	input3buffer = malloc(size + 1);	// ���� �����ŭ +1(NULL)
	memset(input3buffer, 0, size + 1);	// 0���� �ʱ�ȭ

	fseek(input3, 0, SEEK_SET); // ó������ �̵�
	// ���ۿ� ���� ,��ü ������ ,Ƚ�� ,���
	count = fread(input3buffer, size, 1, input3);	// ���� ũ�⸸ŭ ����
	
	printf("���ڿ� : %s\nSIZE : %d\nCOUNT : %d\n", input3buffer, size, count);

	fseek(input3, 0, SEEK_SET);		// �׻� ó������ �̵��ؼ� �� �б�
	fscanf_s(input3, "%s%d%d%d", name, sizeof(name), &score, &value, &total);	// ����, ���ڿ��� ������ �ʿ�
	
	printf("\nNAME : %s\nSCORE : %d\nVALUE : %d\nTOTAL : %d\n", name, score, value, total);

	fclose(input3);
	free(input3buffer);



	printf("=====================================\n");

	node P[3] = { {"�浿", 8}, {"�Ǵн�", 1}, {"����", 5} };
	node H[3];
	int length = sizeof(H)/sizeof(H[0]);
	FILE* in;
	FILE* out;

	out = fopen("test1.txt", "w+");	// ���� ���� �б⵵ ����

	printf("test1 : ���Ͽ�����\n");

	for (int i = 0; i < length; i++)
	{
		printf("P[ %d ] : %s %d\n", i, P[i].objectName, P[i].age);
	}
	// ���, ������, Ƚ��, ����
	fwrite(&P, sizeof(P), 1, out);	// ����ü�� ���̳ʸ��� ����

	

	// ���� ������, �̵��� ũ��, ������ 
	fseek(out, 0, SEEK_SET); // ���������͸� ������ ó������ �̵�
	fread(H, sizeof(H), 2, out);	// ���̳ʸ��� �о� ����ü�� ������

	
	for (int i = 0; i < length; i++)
	{
		printf("%s %d\n", H[i].objectName, H[i].age);
	}

	fclose(out);

	return 0;
}