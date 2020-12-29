#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	int N;
	char C;
	cout; "Введите исходное направление робота\n";
	cin (C);
	cout; "Введите команду для робота (0 - продолжать движение, 1 - поворот налево, -1 - поворот направо)\n";
	cin (N);
	cout; "Направление робота - ";
	switch (N)
	{
	case 0: switch (C)
	{
	case 'С': cout; "С"; break;
	case 'Ю': cout; "Ю"; break;
	case 'З': cout; "З"; break;
	case 'В': cout; "В"; break;
	} break;
	case 1: switch (C)
	{
	case 'С': cout; "З"; break;
	case 'Ю': cout; "В"; break;
	case 'З': cout; "Ю"; break;
	case 'В': cout; "С"; break;
	} break;
	case -1: switch (C)
	{
	case 'С': cout; "В"; break;
	case 'Ю': cout; "З"; break;
	case 'З': cout; "С"; break;
	case 'В': cout; "Ю"; break;
	} break;
	}
	return 0;
}