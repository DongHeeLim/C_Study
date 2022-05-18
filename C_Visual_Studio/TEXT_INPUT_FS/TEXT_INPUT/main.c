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
	fgets(strText, 100, input2);	// 한줄씩
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
	
	fseek(input3, 0 , SEEK_END);	// 끝 위치
	size = ftell(input3);	// 순수한 문자열 크기	(NULL 없이)

	input3buffer = malloc(size + 1);	// 내용 사이즈만큼 +1(NULL)
	memset(input3buffer, 0, size + 1);	// 0으로 초기화

	fseek(input3, 0, SEEK_SET); // 처음으로 이동
	// 버퍼에 저장 ,전체 사이즈 ,횟수 ,대상
	count = fread(input3buffer, size, 1, input3);	// 파일 크기만큼 읽음
	
	printf("문자열 : %s\nSIZE : %d\nCOUNT : %d\n", input3buffer, size, count);

	fseek(input3, 0, SEEK_SET);		// 항상 처음으로 이동해서 다 읽기
	fscanf_s(input3, "%s%d%d%d", name, sizeof(name), &score, &value, &total);	// 문자, 문자열만 사이즈 필요
	
	printf("\nNAME : %s\nSCORE : %d\nVALUE : %d\nTOTAL : %d\n", name, score, value, total);

	fclose(input3);
	free(input3buffer);



	printf("=====================================\n");

	node P[] = { {"길동", 8}, {"피닉스", 1}, {"히응", 5} };
	node H[3];
	int length = sizeof(H)/sizeof(H[0]);
	FILE* in;
	FILE* out;

	out = fopen("test1.txt", "w+");	// 쓰기 전용 읽기도 가능

	for (int i = 0; i < 3; i++)
	{
		snprintf(P + i, 20, "%s\n", P[i]);
	}
	// 대상, 사이즈, 횟수, 파일
	fwrite(P, sizeof(node), 1, out);	// \s \n 까지 읽음 바이너리로 저장
	fwrite(P+1, sizeof(node), 2, out);	// 횟수가 2번이면 2개 읽음
	

	

	// 파일 포인터, 이동할 크기, 기준점 
	fseek(out, 0, SEEK_SET); // 파일포인터를 파일의 처음으로 이동
	fread(H, sizeof(node), 2, out);
	fread(H + 2, sizeof(node), 1, out);
	
	for (int i = 0; i < length; i++)
	{
		printf("%s %d\n", H[i].objectName, H[i].age);
	}

	fclose(out);

	return 0;
}