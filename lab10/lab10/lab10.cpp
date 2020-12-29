#include <iostream>
#include <stdio.h>
#include <math.h>

void f1() {
	int a, b;
	printf("Введите A и B:   ");
	scanf_s("%d %d", &a, &b);
	if (a > 2 && b <= 3) printf("Да");
	else printf("Нет");
}

void f2() {
	int a, b, c;
	printf("Введите A, B и C:   ");
	scanf_s("%d %d %d", &a, &b, &c);
	if (a < b && b < c) printf("Да");
	else printf("Нет");
}

void f3() {
	int a;
	printf("Введите число:   ");
	scanf_s("%d", &a);
	if (a % 2 == 0 && (float)a / 100 < 1) printf("Да");
	else printf("Нет");
}

void f4() {
	int a;
	printf("Введите число:   ");
	scanf_s("%d", &a);
	if (((a / 100) < (a / 10 % 10) && (a / 10 % 10) < (a % 10)) || ((a / 100) > (a / 10 % 10) && (a / 10 % 10) > (a % 10))) printf("Да");
	else printf("Нет");
}

void f5() {
	int a;
	printf("Введите число:   ");
	scanf_s("%d", &a);
	if ((a/1000 == a%10) && (a/100%10 == a/10%10)) printf("Да");
	else printf("Нет");
}

void f6() {
	int a, b, c;
	printf("Введите A, B и C:   ");
	scanf_s("%d %d %d", &a, &b, &c);
	if ((a*a + b*b == c*c) || (b*b + c*c == a*a) || (c*c + a*a == b*b)) printf("Да");
	else printf("Нет");
}

void f7() {
	int a, b, c;
	printf("Введите A, B и C:   ");
	scanf_s("%d %d %d", &a, &b, &c);
	if ((a + b > c) && (b + c > a) && (c + a > b)) printf("Да");
	else printf("Нет");
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
	f6();
	printf("\n\n");
	f7();
	printf("\n\n");
	return 0;
}
