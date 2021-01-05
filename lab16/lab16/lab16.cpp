#include <iostream>
#include <stdio.h>
#include <math.h>
#include <Windows.h>
using namespace std;

void f1() {
	int *a;
	int i, n;
	printf("Введите размер массива:   ");
	scanf_s("%d", &n);
	a = new int[n];
	for (i = 0; i < n; ++i) {
		a[i] = 1 + 2 * i;
		cout << a[i] << " ";
	};
}

void f2() {
	int *ar;
	int i, n, a, d;
	printf("Введите N, A и D:   ");
	scanf_s("%d %d %d", &n, &a, &d);
	ar = new int[n];
	ar[0] = a;
	cout << ar[0] << " ";
	for (i = 1; i < n; ++i) {
		ar[i] = ar[i-1] * d;
		cout << ar[i] << " ";
	};
}

void f3() {
	int *ar;
	int i, n, a, b;
	printf("Введите N, A и D:   ");
	scanf_s("%d %d %d", &n, &a, &b);
	ar = new int[n];
	ar[0] = a;
	ar[1] = b;
	cout << ar[0] << " " << ar[1] << " ";
	for (i = 2; i < n; ++i) {
		ar[i] = pow(2, i-2) * (a + b);
		cout << ar[i] << " ";
	};
}

void f4() {
	int *a;
	int i, n;
	printf("Введите размер массива:   ");
	scanf_s("%d", &n);
	a = new int[n];
	printf("Введите переменные:   ");
	for (i = 1; i <= n; ++i) scanf_s("%d", &a[i]);
	if (n % 2 == 0) for (i = 1; i <= n/2; ++i) cout << a[i] << " " << a[n - i + 1] << " ";
	else {
		for (i = 1; i <= (n-1)/2; ++i) cout << a[i] << " " << a[n - i + 1] << " ";
		cout << a[(n + 1) / 2];
	}
}

void f5() {
	int *a;
	int i, n;
	printf("Введите размер массива:   ");
	scanf_s("%d", &n);
	a = new int[n];
	printf("Введите переменные:   ");
	for (i = 0; i < n; ++i) scanf_s("%d", &a[i]);
	for (i = 0; i < n; ++i) if (a[i] % 2 == 1) cout << a[i] << " ";
	for (i = 0; i < n; ++i) if (a[i] % 2 == 0) cout << a[i] << " ";
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
