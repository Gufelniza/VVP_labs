#include <iostream>
#include <stdio.h>
#include <math.h>
#include <Windows.h>
using namespace std;

void f1() {
	int a, b;
	printf("Введите A и B:   ");
	scanf_s("%d %d", &a, &b);
	if (a == b) {
		a = 0;
		b = 0;
	}
	else if (a>b) b = a;
	else a = b;
	printf("%d %d", a, b);
}

void f2() {
	int n, s;
	char a;
	printf("Введите число и направление:   ");
	scanf_s("%d %c", &n, &a);
	if (a == "С") s = 0;
	if (a == "З") s = 1;
	if (a == "Ю") s = 2;
	if (a == "В") s = 3;
	s = (s + n) % 4;
	if (s == 0) printf("С");
	if (s == 0) printf("З");
	if (s == 0) printf("Ю");
	if (s == 0) printf("В");
}

void f3() {
	int a, b, c, s;
	printf("Введите A, B и C:   ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (abs(a - b) < abs(a - c)) {
		s = abs(a - b);
		printf("Точка B");
	}
	else {
		s = abs(a - c);
		printf("Точка C");
	}
	printf("%d", s);
}

void f4() {
	int x, y;
	printf("Введите X и Y:   ");
	scanf_s("%d %d", &x, &y);
	if (x > 0 && y > 0) printf("1");
	else if(x < 0 && y > 0) printf("2");
	else if (x < 0 && y < 0) printf("3");
	else if (x > 0 && y < 0) printf("4");
}

void f5() {
	int a;
	printf("Введите число:   ");
	scanf_s("%d", &a);
	if (a == 0) printf("Нулевое число");
	else {
		if (a > 0) printf("Положительное ");
		else printf("Отрицательное ");
		if (a % 2 == 0) printf("четное число");
		else printf("нечетное число");
	}
}

void f6() {
	int a;
	printf("Введите число:   ");
	scanf_s("%d", &a);
	if (a == 0) printf("Нулевое число");
	else {
		if (a % 2 == 0) printf("Четное ");
		else printf("Нечетное ");
		if (a / 100 > 0) printf("трехзначное число");
		else if (a / 10 > 0) printf("двузначное число");
		else printf("однозначное число");
	}
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
