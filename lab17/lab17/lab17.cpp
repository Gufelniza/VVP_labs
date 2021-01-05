#include <iostream>
#include <stdio.h>
#include <math.h>
#include <Windows.h>
using namespace std;

void f1() {
	int *a;
	int i, n, k, l;
	float s;
	printf("Введите N, K и L:   ");
	scanf_s("%d %d %d", &n, &k, &l);
	a = new int[n];
	printf("Введите переменные:   ");
	for (i = 1; i <= n; ++i) scanf_s("%d", &a[i]);
	s = 0;
	for (i = k; i <= l; ++i) s = s + a[i];
	s = s / (l - k + 1);
	cout << s;
}

void f2() {
	int *a;
	int i, n, k, l;
	float s;
	printf("Введите N:   ");
	scanf_s("%d", &n);
	a = new int[n];
	printf("Введите переменные:   ");
	for (i = 0; i < n; ++i) scanf_s("%d", &a[i]);
	k = a[1] - a[0];
	for (i = 2; i < n; ++i) if (a[i] - a[i - 1] != k) {
		k = 0;
		break;
	}
	cout << k;
}

void f3() {
	int *a;
	int i, n, k;
	float s;
	printf("Введите N:   ");
	scanf_s("%d", &n);
	a = new int[n];
	printf("Введите переменные:   ");
	for (i = 1; i <= n; ++i) scanf_s("%d", &a[i]);
	k = a[2];
	for (i = 2; i <= (n - n % 2) / 2; ++i) if (a[i * 2] < k) k = a[i * 2];
	cout << k;
}

void f4() {
	int *a;
	int i, n, f;
	printf("Введите размер массива:   ");
	scanf_s("%d", &n);
	a = new int[n];
	printf("Введите переменные:   ");
	for (i = 1; i <= n; ++i) scanf_s("%d", &a[i]);
	f = 0;
	for (i = 1; i <= n; ++i) if (a[i] > a[i - 1] && a[i] > a[i + 1]) f = i;
	if (f == 0) cout << "Локальных максимумов нет";
	else cout << f;
}

void f5() {
	int *a;
	int i, n, j;
	printf("Введите размер массива:   ");
	scanf_s("%d", &n);
	a = new int[n];
	printf("Введите переменные:   ");
	for (i = 1; i <= n; ++i) scanf_s("%d", &a[i]);
	for (i = 1; i <= n; ++i) {
		for (j = i + 1; j <= n; ++j) if (a[i] == a[j]) break; 
		if (a[i] == a[j]) break;
	}
	cout << i << " " << j;
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	f1();
	printf("\n\n");
	f2();
	printf("\n\n");
	f3();
	printf("\n\n");
	f4();
	printf("\n\n");
	f5();
	printf("\n\n");
	return 0;
}
