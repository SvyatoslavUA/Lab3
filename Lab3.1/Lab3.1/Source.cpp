// < ��������, ��������� >
// ����������� ������ � 3.1
// ������������, ������ ��������: ������� ������ �����.
// ������ 0.9
#include <iostream>

#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	double y; // ��������� ���������� ������
	double A; // �������� ��������� - ������������� ����� ������� ������
	double B; // �������� ��������� - ������������� ����� ������� ������
	cout << "x = "; cin >> x;

	A = 2 * (fabs(x * x * x));
	// ����� 1: ������������ � ���������� ����
	if (x <= -0.1)
		B = 5 * cos (18 * x);
	if (0.1 < x && x < 1.2)
		B = atan (x + 2/ 5);
	if (x >= 1.2)
		B = cos (x + 18) / sin (x + 18);
	y = A + B;
	cout << endl;
	cout << "1) y = " << y << endl;
	// ����� 2: ������������ � ������ ����
	if (x <= -0.1)
		B = 5 * cos(18 * x);
	else
		if (0.1 < x && x < 1.2)
			B = atan(x + 2 / 5);
		else
			B = cos(x + 18) / sin(x + 18);
	y = A + B;
	cout << "2) y = " << y << endl;
	cin.get();
	return 0;
}