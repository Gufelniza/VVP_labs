#include <iostream>
#include <stdio.h>
#include <math.h>
#include <Windows.h>
using namespace std;

void f1() {
	int i, a, b, j;
	printf("Введите A и B:   ");
	scanf_s("%d %d", &a, &b);
	for (i = a; i <= b; ++i) {
		for (j = 0; j < i; ++j) printf("%d ", i);
		printf("\n");
	};
}

void f2() {
	int s, a, b;
	printf("Введите A и B:   ");
	scanf_s("%d %d", &a, &b);
	s = 0;
	while (a >= b) {
		++s;
		a = a - b;
	}
	printf("%d", s);
}

void f3() {
	int s, n, i;
	printf("Введите число:   ");
	scanf_s("%d", &n);
	i = 0;
	for (s = 0; s < n; ++i) s = s + i;
	--i;
	printf("%d", i);
}

void f4() {
	int s, p;
	float i;
	printf("Введите P:   ");
	scanf_s("%d", &p);
	i = 1000;
	s = 0;
	for (i; i <= 1100; i=i*(1+(float)p/100)) ++s;
	printf("%d", s);
}

void f5() {
	int a, b;
	printf("Введите A и B:   ");
	scanf_s("%d %d", &a, &b);
	for (a; a != b; a) {
		if (a > b) a = a - b;
		else b = b - a;
	}
	printf("%d", a);
}

void f6() {
	int a, b, n, i, x;
	printf("Введите N:   ");
	scanf_s("%d", &n);
	a = 1;
	b = 1;
	for (i = 3; b != n; ++i) {
		x = b;
		b = a + b;
		a = x;
	}
	printf("%d", i);
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
	f6();
	printf("\n\n");
	return 0;
}
