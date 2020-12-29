#include <iostream>
#include <stdio.h>
#include <math.h>

void f1() {
	int i;
	printf("Введите кол-во секунд:   ");
	scanf_s("%d", &i);
	i = i % 60;
	printf("%d c", i);
}

void f2() {
	int i;
	printf("Введите день:   ");
	scanf_s("%d", &i);
	i = i % 7;
	printf("%d", i);
}

void f3() {
	int i, f;
	printf("Введите день в году и день недели:   ");
	scanf_s("%d %d", &i, &f);
	i = (i + f - 1) % 7;
	if (i == 0) printf("7");
	else printf("%d", i);
}

void f4() {
	int a, b, c, i, v;
	printf("Введите размеры куба и сторону квадрата:   ");
	scanf_s("%d %d %d", &a, &b, &c);
	i = floor(a / c) * floor(b / c);
	v = a * b - i * c * c;
	printf("В прямоугольнике поместится %d квадратов, оставив %d", i, v);
}

void f5() {
	int i;
	printf("Введите год:   ");
	scanf_s("%d", &i);
	i = ceil((float)i / 100);
	printf("%d век", i);
}

int main()
{
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
