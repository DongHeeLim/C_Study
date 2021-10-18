#include <stdio.h>
#include <string.h>

void divideAlpa()
{
	char alpa[] = "abcdefghijklmnopqrstuvwxyz";
	int alpacnt[26] = { 0 };

	char word[50];
	int len = sizeof(word) / sizeof(char);
	//char* word = (char *)malloc(sizeof(char) * 50);
	scanf_s("%s", word, len);
	int lenWord = strlen(word);
	int alpacntlen = sizeof(alpacnt) / sizeof(int);
	//printf("%d\n", alpacntlen);
	//printf("%d\n", len);
	//printf("%d\n", strlen(word));

	printf("{ ");
	for (int i = 0; i < lenWord - 1; i++)
	{
		printf("%c, ", word[i]);
	}
	printf("%c", word[lenWord - 1]);
	printf(" }\n");

	printf("%s\n", word);

	for (int i = 0; i < lenWord; i++)
	{
		for (int j = 0; j < alpacntlen; j++)
		{
			if (word[i] == alpa[j]) {
				alpacnt[j] += 1;
				break;
			}
		}
	}

	for (int i = 0; i < alpacntlen; i++)
	{
		printf("%c-%d\n", alpa[i], alpacnt[i]);
	}


}