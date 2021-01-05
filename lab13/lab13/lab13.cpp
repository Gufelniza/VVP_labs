#include <iostream>
#include <stdio.h>
#include <math.h>
#include <Windows.h>
using namespace std;

void f1() {
	int i;
	float a;
	printf("Введите цену:   ");
	scanf_s("%f", &a);
	for (i = 1; i < 10; ++i) printf("%f р. за 0,%d кг\n", a / 10 * i, i);
}

void f2() {
	float a;
	int i, n;
	printf("Введите число:   ");
	scanf_s("%d", &n);
	a = 1;
	for (i = 1; i <= n; ++i) a = a * ((float)i / 10 + 1); 
	printf("%f", a);
}

void f3() {
	int i, n, s;
	printf("Введите число:   ");
	scanf_s("%d", &n);
	s = 0;
	for (i = 0; i < n; ++i) s = s + 1 + 2 * i;
	printf("%d", s);
}

void f4() {
	int i, n, a, s, f;
	printf("Введите A и N:   ");
	scanf_s("%d %d", &a, &n);
	s = 1;
	f = 1;
	for (i = 1; i <= n; ++i) {
		f = f * a;
		s = s + f;
	}
	printf("%d", s);
}

void f5() {
	int i, n, a, s, f;
	printf("Введите A и N:   ");
	scanf_s("%d %d", &a, &n);
	s = 1;
	f = 1;
	for (i = 1; i <= n; ++i) {
		f = f * a * (-1);
		s = s + f;
	}
	printf("%d", s);
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
