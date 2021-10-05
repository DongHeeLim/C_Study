#include<stdio.h>
#define PI 3.14159
#define TRUE 1 
//2021.9.30 
//�����Ǽ�Ʈ(��������)
void sel(int a[], int n) {
	int i, j, temp;
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++) {
			if (a[i] > a[j]) {
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}
void prn(int a[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%d\t", a[i]);
	}
}
//2021.9.16 2�����迭�� �հ�� ���
void sum_matrix(int a[][5], int b[][5], int c[][5], int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}
void print_matrix(int c[][5], int n) {
	int i, j;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\t", c[i][j]);
		}
		printf("\n");
	}
}
//2021.9.16�հ��Լ�(hap), ����Լ�(avg)
int hap(int a[], int n) {
	int i, h = 0;
	for (i = 0; i < n; i++) {
		h = h + a[i];
	}
	return h;
}
double avg(int a[], int n) {
	int i, h = 0;
	double av;
	for (i = 0; i < n; i++) {
		h = h + a[i];
	}
	av = (double)h / n;
	return av;
}
//21.9.9 swap ��ü��
void swap(char* a, char* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
//21.9.9 makeperm ������ ������ ���
void makeperm(char perm[], int n, int k) {
	char temp;
	int i;
	if (k == n) {   //k=3�̸� 
		for (i = 0; i < n; i++) printf("%c ", perm[i]);
		printf("\n");
	}
	else {
		for (i = k; i < n; i++) {
			swap(&perm[i], &perm[k]);
			makeperm(perm, n, k + 1);
			swap(&perm[i], &perm[k]);
		}
	}
}

//21.9.9 �ϳ���ž �˰��� ���ȣ��
void hanoi(char a, char c, char b, int n) {
	if (n >= 1) {
		hanoi(a, b, c, n - 1);
		printf("%c���� %c�� %d�� ������ �̵�\n", a, c, n);
		hanoi(b, c, a, n - 1);
	}
}

//=====9��2�� ����========================
// 
//���ȣ���� �̿��� ���丮��2
int fac2(int n) {
	if (n == 1 || n == 0) return 1;
	return n * fac2(n - 1);
}

//�ݺ����� Ȱ���� ���丮��1
int fac1(int n) {
	int i;
	int gob = 1;
	for (i = 1; i <= n; i++) {
		gob = gob * i;
	}
	return gob;
}
//�ش� ��ġ(n)�� �Ǻ���ġ���� ���ȣ�������� ���
int fibo2(int n) {
	if (n == 1) { return 0; }
	if (n == 2) { return 1; }
	return fibo2(n - 1) + fibo2(n - 2);
}

//�Ǻ���ġ���� ������ŭ ���
void fibo1(int n) {
	int a = 0, b = 1, c;
	int i;
	printf("%d\n", a);
	printf("%d\n", b);
	for (i = 1; i <= n - 2; i++) {
		c = a + b;
		printf("%d\n", c);
		a = b;
		b = c;
	}
}
// �����佺�׳׽��� ü -�Ҽ����ϱ� 
void err_prime(int array[], int num) {
	int i, j;
	for (i = 2; i < num; i++) {
		if (array[i] == 1) continue;
		for (j = i + i; j < num; j = j + i) {
			array[j] = 1;
		}
	}
	for (i = 2; i < num; i++) {
		if (array[i] == 0) printf("%d\n", i);
	}
}

//-================
int is_prime(int n) { //n=7 ��������
	int i;
	for (i = 2; i < n; i++) {
		if (n % i == 0) return 0;  //0(false) �Ҽ��ƴ�
	}
	return 1;           //1(true) �Ҽ���
}

int get_gcd(int u, int v) {
	int temp;
	int cnt = 0;
	while (u) {
		if (u < v) {
			temp = u;
			u = v;
			v = temp;
		}
		u = u - v;
		cnt = cnt + 1;    //ī��Ʈ  12ȸ
	}
	printf("Ƚ��=%d\n", cnt);
	return v;
}
int gcd_modulus(int u, int v) {
	int temp;
	int cnt = 0;
	while (v) {
		u = u % v;  //��������
		temp = u;
		u = v;
		v = temp;
		cnt = cnt + 1;
	}
	printf("����=%d\n", cnt);   //2ȸ
	return u;
}