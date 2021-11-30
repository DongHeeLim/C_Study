#include <stdio.h>

void bubbleSort(int* array, int length);
void printArray(int* array, int length);
void binarySearch(int* array, int length, int key);

int main() {

	int array[10] = { 30, 40 , 20, 10, 60, 70, 90, 100, 80, 50 };
	int length = sizeof(array) / sizeof(array[0]);
	int key;

	bubbleSort(array, length);
	printf("정리된 내용->");
	printArray(array, length);

	printf("찾을 숫자를 입력해주세요 : ");
	scanf_s("%d", &key);
	
	binarySearch(array, length, key);

	return 0;
}

void bubbleSort(int* array, int length) {

	for (int i = 0; i < length - 1; i++)
	{
		int flag = 0;
		for (int j = 0; j < length - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				int temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;

				flag = 1;

			}
		}
		if (flag == 0) break;
	}
}

void printArray(int* array, int length) {
	for (int i = 0; i < length; i++)
	{
		printf("%d ", array[i]);
	}
	printf("\n");
}

void binarySearch(int* array, int length, int key) {
	int low = 0;
	int high = length - 1;
	int cnt = 0;
	while (low <= high)
	{
		cnt++;
		int middle = (low + high) / 2;
		if (key == array[middle])
		{
			printf("%d 번째에서 ", middle + 1);
			break;
		}
		else if (key < array[middle])
		{
			high = middle - 1;
		}
		else
		{
			low = middle + 1;
		}

	}
	if (low > high) printf("찾을 키가 없습니다.\n");
	else printf("찾음\n");
	printf("찾은 횟수 %d\n", cnt);
}