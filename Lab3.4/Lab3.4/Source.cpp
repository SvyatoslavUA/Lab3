// Lab_03_4.cpp
// < ��������, ��������� >
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 0.9
#include <iostream>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ������� ��������
	double R; // ������� ��������
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// ������������ � ����� ����
	if ((y = sqrt ((R*R) - (x*x)) && abs (x) <= R && x <= 0 && y <= 0 && abs (y) <= R) ||
		(y = (x - 1)*(x - 1) && x >= 0 && abs (x) <= R && y <= sqrt((R * R) - (x * x)) && abs (y) <= R))
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}