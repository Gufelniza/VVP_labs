#include <iostream>
using namespace std;

void PowerA3(int a, int *b)   {
	*b = pow(a, 3);
}

int Sign(int a) {
	if (a < 0) return -1;
	if (a == 0) return 0;
	if (a > 0) return 1;
}

float RingS(int a, int b) {
	return (3.14*(pow(a, 2) - pow(b, 2)));
}

void Quarter(int x, int y) {
	if (x > 0 && y > 0) cout << "1 четверть";
	if (x < 0 && y > 0) cout << "2 четверть";
	if (x < 0 && y < 0) cout << "3 четверть";
	if (x > 0 && y < 0) cout << "4 четверть";
}

int Fact2(int a) {
	int i, s;
	s = 1;
	if (a % 2 == 0) {
		for (i = 1; i <= a / 2; ++i) s = s * 2 * i;
	}
	else {
		for (i = 0; i <= (a - 1) / 2; ++i) s = s * (2 * i + 1);
	}
	return s;
}

int main()   {
	int i, x, y;
	setlocale(LC_ALL, "Russian");

	//1 -->
	for (i = 0; i < 1; ++i) {
		cout << "\nВведите X, чтобы узнать X^3\nX = ";
		cin >> x;
		PowerA3(x, &y);
		cout << "X^3 = " << y;
	}

	//2 -->
	cout << "\n\n" << Sign(x) + Sign(y);

	//3 -->
	cout << "\n\nВведите R1\nR1 = ";
	cin >> x;
	cout << "Введите R2\nR2 = ";
	cin >> y;
	cout << RingS(x, y);

	//4 -->
	cout << "\n\nВведите X\nX = ";
	cin >> x;
	cout << "Введите Y\nY = ";
	cin >> y;
	Quarter(x, y);

	//5 -->
	cout << "\n\nВведите N\nN = ";
	cin >> x;
	cout << Fact2(x);
}