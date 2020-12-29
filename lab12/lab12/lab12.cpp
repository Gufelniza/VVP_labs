#include <iostream>
#include <stdio.h>
#include <math.h>

void f1() {
	int a, b, s;
	printf("Введите номера дня и месяца:   ");
	scanf_s("%d %d", &a, &b);
	s = a / 10;
	a = a % 10;

	if (s == 1 && a == 0) printf("десятое ");
	if (s == 1 && a == 1) printf("одиннадцатое ");
	if (s == 1 && a == 2) printf("двенадцатое ");
	if (s == 1 && a == 3) printf("тринадцатое ");
	if (s == 1 && a == 4) printf("четырнадцатое ");
	if (s == 1 && a == 5) printf("пятнадцатое ");
	if (s == 1 && a == 6) printf("шестнадцатое ");
	if (s == 1 && a == 7) printf("семнадцатое ");
	if (s == 1 && a == 8) printf("восемнадцтое ");
	if (s == 1 && a == 9) printf("девятнадцатое ");
	if (s == 2 && a == 0) printf("двадцатое ");
	if (s == 3 && a == 0) printf("тридцатое ");
	if (s == 3 && a == 1) printf("тридцать первое ");
	if ((s != 1) and (s != 3) and (a > 0)) {
		if (s == 2) printf("двадцать ");
		if (a == 1) printf("первое ");
		if (a == 2) printf("второе ");
		if (a == 3) printf("третье ");
		if (a == 4) printf("четвертое ");
		if (a == 5) printf("пятое ");
		if (a == 6) printf("шестое ");
		if (a == 7) printf("седьмое ");
		if (a == 8) printf("восьмое ");
		if (a == 9) printf("девятое ");
	}

	if (b == 1) printf("января");
	if (b == 2) printf("февраля");
	if (b == 3) printf("марта");
	if (b == 4) printf("апреля");
	if (b == 5) printf("мая");
	if (b == 6) printf("июня");
	if (b == 7) printf("июля");
	if (b == 8) printf("августа");
	if (b == 9) printf("сентября");
	if (b == 10) printf("октября");
	if (b == 11) printf("ноября");
	if (b == 12) printf("декабря");
}

void f2() {
	int i, s;
	char a;
	printf("Введите изначальное направление:   ");
	for (i = 0; 2; i = 0) {
		scanf_s("%d", &i);
		s = s + i;
	}
	scanf_s("%c", &a);
	printf("%d", s);
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
	else if (x < 0 && y > 0) printf("2");
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
