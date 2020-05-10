#include <iostream>

using namespace std;

double min(double a, double b)
{
	double t;
	if (a <= b)
	{
		t = a;
	}
	else
	{
		t = b;
	}
	return t;
}

int main()
{
	setlocale(LC_ALL, "russian");

	double a, b, c, d;

	cout << "Введите A: ";
	cin >> a;
	cout << "Введите B: ";
	cin >> b;
	cout << "Введите C: ";
	cin >> c;
	cout << "Введите D: ";
	cin >> d;

	double r = (min(a, b) + min(c, d)) / min(1.5, abs(d));
	cout << "Результат: " << r << "\n";

	system("pause");

	return 0;
}
