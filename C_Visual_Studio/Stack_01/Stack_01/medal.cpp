#include <stdio.h>

void clasifyMedal() {
	int kcode, mcode;
	int k, m;
	int a[5][4] = {0};
	int row = sizeof(a) / sizeof(a[0]);
	int col = sizeof(a[0]) / sizeof(a[0][0]);
	//printf("%d %d \n", row, col);

	scanf_s("%d%d", &kcode, &mcode);
	while (kcode != 0)
	{
		k = kcode / 10 - 1;
		m = mcode - 1;
		a[k][m] += 1;
		a[4][m] += 1;
		a[k][3] += 1;
		scanf_s("%d%d", &kcode, &mcode);
	}

	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			printf("%d ", a[i][j]);
		}

		printf("\n");
	}
}