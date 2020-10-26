// Lab_03_3.cpp
// Клак Ігор Михайлович
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 11
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	// розгалуження в повній формі
	if (x <= -1-R)
		y = -(x+1+R);
	else
		if (x > -1-R && x <= -1)
			y = sqrt(R * R - (x + 1) * (x+1));
		else
			if (x > -1 && x <= 1)
				y = R;
			else
				if (x > 1 && x <= 2)
					y = 2 * R + x - 1 + R * x / 3;
				else
					y = -1;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}

