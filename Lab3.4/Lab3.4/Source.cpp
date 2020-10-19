// Lab_03_4.cpp
// < Ільчишин, Святослав >
// Лабораторна робота № 3.4
// Розгалуження, задане плоскою фігурою.
// Варіант 0.9
#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // вхідний параметр
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((y = sqrt ((R*R) - (x*x)) && abs (x) <= R && x <= 0 && y <= 0 && abs (y) <= R) ||
		(y = (x - 1)*(x - 1) && x >= 0 && abs (x) <= R && y <= sqrt((R * R) - (x * x)) && abs (y) <= R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}