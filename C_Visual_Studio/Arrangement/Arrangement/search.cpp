#include <stdio.h>
#include <string.h>
#include "search.h"
#include "words.h"

void showWord() {

	
}


void findWord() {
	char target[50];
	int flag;
	int len = sizeof(target);
	printf("%d\n", elength);
	printf("%d\n", CHAR);
	while (true)
	{
		flag = 0;
		printf("���ܾ �Է��ϼ��� :");
		scanf_s("%s", target, len);
		for (int i = 0; i < elength; i++)
		{
			if (strcmp(target, e[i]) == 0) {
				flag = 1;
				printf("�ѱ� : %s\n", h[i]);
				break;
			}
		}
		if (!flag) {
			printf("����, �ٽ� �Է����ּ���.\n");
		}
		else break;
	}
	printf("����");
}