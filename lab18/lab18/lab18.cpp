#include <iostream>
#include <stdio.h>
#include <math.h>
#include <Windows.h>
using namespace std;

void f1() {
	int *a, *b;
	int i, n, k;
	float s;
	printf("Введите N:   ");
	scanf_s("%d", &n);
	a = new int[n];
	b = new int[n];
	printf("Введите переменные массива A:   ");
	for (i = 0; i < n; ++i) scanf_s("%d", &a[i]);
	printf("Введите переменные массива B:   ");
	for (i = 0; i < n; ++i) scanf_s("%d", &b[i]);
	for (i = 0; i < n; ++i) {
		k = a[i];
		a[i] = b[i];
		b[i] = k;
		cout << a[i] << " ";
	}
	cout << "\n";
	for (i = 0; i < n; ++i) cout << b[i] << " ";
}

void f2() {
	int *a;
	float *b;
	int i, n;
	float s;
	printf("Введите N:   ");
	scanf_s("%d", &n);
	a = new int[n];
	b = new float[n];
	printf("Введите переменные массива A:   ");
	for (i = 0; i < n; ++i) scanf_s("%d", &a[i]);
	b[0] = a[0];
	cout << b[0];
	for (i = 1; i < n; ++i) {
		b[i] = (b[i - 1] * i + a[i]) / (i + 1);
		cout << " " << b[i];
	}
}

void f3() {
	int *a;
	int i, n, k;
	float s;
	printf("Введите N:   ");
	scanf_s("%d", &n);
	a = new int[n];
	printf("Введите переменные:   ");
	for (i = 0; i < n; ++i) scanf_s("%d", &a[i]);
	k = 0;
	for (i = 0; i < n; ++i) if (a[i] % 2 == 1) k = a[i];
	for (i = 0; i < n; ++i) {
		if (a[i] % 2 == 1) a[i] = a[i] + k;
		cout << a[i] << " ";
	}
}

void f4() {
	int *a;
	int i, n, min, max;
	printf("Введите размер массива:   ");
	scanf_s("%d", &n);
	a = new int[n];
	printf("Введите переменные:   ");
	for (i = 0; i < n; ++i) scanf_s("%d", &a[i]);
	min = 0;
	max = 0;
	for (i = 1; i < n; ++i) { 
		if (a[i] < a[min]) min = i; 
		if (a[i] > a[max]) max = i;
	}
	if (min < max) for (i = 0; i < n; ++i) {
		if (i > min && i < max) a[i] = 0;
		cout << a[i] << " ";
	}
}

void f5() {
	int *a;
	int i, n, j, x;
	printf("Введите размер массива:   ");
	scanf_s("%d", &n);
	a = new int[n];
	printf("Введите переменные:   ");
	for (i = 0; i < n; ++i) scanf_s("%d", &a[i]);
	for (i = 1; i < n; ++i) if (a[i]<a[0] && a[i + 1]>a[0]) {
		j = i;
		break;
	}
	x = a[0];
	for (i = 0; i < j; ++i) {
		a[i] = a[i + 1];
		cout << a[i] << " ";
	}
	a[j] = x;
	for (i = j; i < n; ++i) cout << a[i] << " ";
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