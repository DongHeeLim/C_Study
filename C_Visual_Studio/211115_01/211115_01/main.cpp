#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#pragma pack(push, 1)
typedef struct _people {
	char name[11];
	int kor;
	int eng;
	int tot;

}pp, *ppp;
#pragma pack(pop)

void swap(ppp man1, ppp man2) {
	pp temp;
	temp = *man1;
	*man1 = *man2;
	*man2 = temp;
}

int main() {

	pp man[3];
	ppp pman = man;
	int length = sizeof(man) / sizeof(man[0]);

	int temp, flag = 0;

	printf("이름 중간 기말 순으로 입력해주세요.\n");
	
	// 입력
	for (int i = 0; i < length; i++)
	{
		scanf_s("%s", man[i].name, sizeof(char)* 11);
		scanf_s("%d", &man[i].kor);		// scanf_s 는 &필수
		scanf_s("%d", &man[i].eng);
		man[i].tot = man[i].kor + man[i].eng;
		rewind(stdin);				// 한번 받으면 버퍼 비우기
	}

	//for (int i = 0; i < length; i++)
	//{
	//	printf("%s %d\n", pman->name, pman->tot);
	//	pman = pman + 1;
	//}

	// 버블 소트
	for (int i = 0; i < length-1; i++)
	{
		flag = 1;
		for (int j = 0; j < length-i-1; j++)
		{
			if (man[j].tot < man[j + 1].tot) {
				flag = 0;
				swap(&man[j], &man[j+1]);
			}
		}

		if (flag == 1) break;
	}

	//출력
	printf("\n이름\t성적\n============\n");

	for (int i = 0; i < length; i++)
	{
		printf("%4s\t%3d\n", man[i].name, man[i].tot);
	}


	return 0;
}