#include<stdio.h>
#define PI 3.14159
#define TRUE 1 
//2021.9.30 
//셀렉션소트(오름차순)
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
//2021.9.16 2차원배열의 합계와 출력
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
//2021.9.16합계함수(hap), 평균함수(avg)
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
//21.9.9 swap 교체법
void swap(char* a, char* b) {
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
//21.9.9 makeperm 집합의 순열을 출력
void makeperm(char perm[], int n, int k) {
	char temp;
	int i;
	if (k == n) {   //k=3이면 
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

//21.9.9 하노이탑 알고리즘 재귀호출
void hanoi(char a, char c, char b, int n) {
	if (n >= 1) {
		hanoi(a, b, c, n - 1);
		printf("%c에서 %c로 %d번 원판을 이동\n", a, c, n);
		hanoi(b, c, a, n - 1);
	}
}

//=====9월2일 수업========================
// 
//재귀호출을 이용한 팩토리얼2
int fac2(int n) {
	if (n == 1 || n == 0) return 1;
	return n * fac2(n - 1);
}

//반복문을 활용한 팩토리얼1
int fac1(int n) {
	int i;
	int gob = 1;
	for (i = 1; i <= n; i++) {
		gob = gob * i;
	}
	return gob;
}
//해당 위치(n)의 피보나치수를 재귀호출방법으로 출력
int fibo2(int n) {
	if (n == 1) { return 0; }
	if (n == 2) { return 1; }
	return fibo2(n - 1) + fibo2(n - 2);
}

//피보나치수열 개수만큼 출력
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
// 에라토스테네스의 체 -소수구하기 
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
int is_prime(int n) { //n=7 던질예정
	int i;
	for (i = 2; i < n; i++) {
		if (n % i == 0) return 0;  //0(false) 소수아님
	}
	return 1;           //1(true) 소수임
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
		cnt = cnt + 1;    //카운트  12회
	}
	printf("횟수=%d\n", cnt);
	return v;
}
int gcd_modulus(int u, int v) {
	int temp;
	int cnt = 0;
	while (v) {
		u = u % v;  //나머지값
		temp = u;
		u = v;
		v = temp;
		cnt = cnt + 1;
	}
	printf("개수=%d\n", cnt);   //2회
	return u;
}