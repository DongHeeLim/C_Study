#include <stdio.h>
#include <string.h>
#include "search.h"
#include "words.h"




void findWord() {
	char target[50];
	int flag;
	int len = sizeof(target);
	printf("%d\n", elen);
	printf("%d\n", CHAR);
	while (true)
	{
		flag = 0;
		printf("영단어를 입력하세요 :");
		scanf_s("%s", target, len);
		for (int i = 0; i < elen; i++)
		{
			if (strcmp(target, e[i]) == 0) {
				flag = 1;
				printf("%s\n", h[i]);
				break;
			}
		}
		if (!flag) {
			printf("없음, 다시 입력해주세요.\n");
		}
		else break;
	}
	printf("종료");
}