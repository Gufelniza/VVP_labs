#include <iostream>
#include <stdio.h>
#include <math.h>
#include <Windows.h>
using namespace std;

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
	if ((s != 1) && (s != 3) && (a > 0)) {
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
	printf("Введите изначальное направление(на английском):   ");
	scanf_s("%c", &a);
	if (a == 'N') s = 0;
	if (a == 'W') s = 1;
	if (a == 'S') s = 2;
	if (a == 'E') s = 3;
	printf("Введите команду(одним числом):   ");
	scanf_s("%d", &i);
	s = (s + i) % 4;
	if (s == 0) cout << "N";
	if (s == 1) cout << "W";
	if (s == 2) cout << "S";
	if (s == 3) cout << "E";
}

void f3() {
	int n, s, a;
	printf("Введите число:   ");
	scanf_s("%d", &n);
	s = n / 10;
	a = n % 10;

	if (s == 1 && a == 0) printf("десять ");
	if (s == 1 && a == 1) printf("одиннадцать ");
	if (s == 1 && a == 2) printf("двенадцать ");
	if (s == 1 && a == 3) printf("тринадцать ");
	if (s == 1 && a == 4) printf("четырнадцать ");
	if (s == 1 && a == 5) printf("пятнадцать ");
	if (s == 1 && a == 6) printf("шестнадцать ");
	if (s == 1 && a == 7) printf("семнадцать ");
	if (s == 1 && a == 8) printf("восемнадцть ");
	if (s == 1 && a == 9) printf("девятнадцать ");
	if (s == 2 && a == 0) printf("двадцать ");
	if (s == 3 && a == 0) printf("тридцать ");
	if (s == 4 && a == 0) printf("сорок ");
	if ((s != 1) && (a > 0)) {
		if (s == 2) printf("двадцать ");
		if (s == 3) printf("тридцать ");
		if (a == 1) printf("одно ");
		if (a == 2) printf("два ");
		if (a == 3) printf("три ");
		if (a == 4) printf("четыре ");
		if (a == 5) printf("пять ");
		if (a == 6) printf("шесть ");
		if (a == 7) printf("семь ");
		if (a == 8) printf("восемь ");
		if (a == 9) printf("девять ");
	}

	if ((n <= 20) || (a == 0) || (a >= 5)) printf("учебных зданий");
	else if (a == 1) printf("учебное здание");
	else if ((a == 2) || (a == 3) || (a == 4)) printf("учебных здания");
}

void f4() {
	int n, a, b, c;
	printf("Введите число:   ");
	scanf_s("%d", &n);
	a = n / 100;
	b = n / 10 % 10;
	c = n % 10;

	if (a == 1) printf("Сто ");
	if (a == 2) printf("Двести ");
	if (a == 3) printf("Триста ");
	if (a == 4) printf("Четыреста ");
	if (a == 5) printf("Пятьсот ");
	if (a == 6) printf("Шестьсот ");
	if (a == 7) printf("Семьсот ");
	if (a == 8) printf("Восемьсот ");
	if (a == 9) printf("Девятьсот ");
	
	if (b == 1) {
		if (c == 0) printf("десять ");
		if (c == 1) printf("одиннадцать ");
		if (c == 2) printf("двенадцать ");
		if (c == 3) printf("тринадцать ");
		if (c == 4) printf("четырнадцать ");
		if (c == 5) printf("пятнадцать ");
		if (c == 6) printf("шестнадцать ");
		if (c == 7) printf("семнадцать ");
		if (c == 8) printf("восемнадцать ");
		if (c == 9) printf("девятнадцать ");
	}
	if (b == 2) printf("двадцать ");
	if (b == 3) printf("тридцать ");
	if (b == 4) printf("сорок ");
	if (b == 5) printf("пятьдесят ");
	if (b == 6) printf("шестьдесят ");
	if (b == 7) printf("семдесят ");
	if (b == 8) printf("восемьдесят ");
	if (b == 9) printf("девяносто ");

	if (b != 1) {
		if (c == 1) printf("один ");
		if (c == 2) printf("два ");
		if (c == 3) printf("три ");
		if (c == 4) printf("четыре ");
		if (c == 5) printf("пять ");
		if (c == 6) printf("шесть ");
		if (c == 7) printf("семь ");
		if (c == 8) printf("восемь ");
		if (c == 9) printf("девять ");
	}
}

void f5() {
	int n, a, b;
	printf("Введите число:   ");
	scanf_s("%d", &n);
	n = n % 60;
	a = n / 12;
	b = n % 12;

	printf("Год ");

	if ((b == 2) || (b == 3) || (b == 4)) {
		if (a == 0) printf("зелёного ");
		if (a == 1) printf("красного ");
		if (a == 2) printf("желтого ");
		if (a == 3) printf("белого ");
		if (a == 4) printf("черного ");
	}
	else {
		if (a == 0) printf("зелёной ");
		if (a == 1) printf("красной ");
		if (a == 2) printf("желтой ");
		if (a == 3) printf("белой ");
		if (a == 4) printf("черной ");
	}

	if (b == 0) printf("крысы");
	if (b == 1) printf("коровы");
	if (b == 2) printf("тигра");
	if (b == 3) printf("зайца");
	if (b == 4) printf("дракона");
	if (b == 5) printf("змеи");
	if (b == 6) printf("лошади");
	if (b == 7) printf("овцы");
	if (b == 8) printf("обезьяны");
	if (b == 9) printf("курицы");
	if (b == 10) printf("собаки");
	if (b == 11) printf("свиньи");
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
