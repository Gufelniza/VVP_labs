#include <iostream>
#include <stdio.h>
#include <math.h>

void f1() {
	int i;
	float f;
	printf("Введите рзмер файла в байтах:   ");
	scanf_s("%d", &i);
	f = i;
	if (f / 1024 > (i - i % 1024) / 1024) f = (i - i % 1024) / 1024 + 1;
	else f = i / 1024;
	printf("%f Кб", f);
}

void f2() {
	int a, b;
	float c;
	printf("Введите длины отрезков a и b:   ");
	scanf_s("%d %d", &a, &b);
	c = (a - a % b) / b;
	printf("В отрезке a помещается %f отрезков b", c);
}

void f3() {
	int a, b, c;
	printf("Введите длины отрезков a и b:   ");
	scanf_s("%d %d", &a, &b);
	c = a % b;
	printf("В отрезке a помещается %d помимо отрезков b", c);
}

void f4() {
	int a, b, c;
	printf("Введите число:   ");
	scanf_s("%d", &a);
	b = a % 10 * 10 + (a - a % 10) / 10;
	printf("Получилось число %d", b);
}

void f5() {
	int a, b, c;
	printf("Введите число:   ");
	scanf_s("%d", &a);
	b = a % 100 * 10 + (a - a % 100) / 100;
	printf("Получилось число %d", b);
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
