// Lab_02.cpp
// < ������ ��������� >
// ����������� ������ � 2.1
// ˳��� ��������.
// ������ 9
#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;
int main()
{
	double a; // ������� ��������
	double b; // ������� ��������
	// double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������ 
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	// z1 = (cos(a) - cos(b)) * (cos(a) - cos(b)) - (sin(a) - sin(b)) * (sin(a) - sin(b));
	z2 = -4 * sin((a - b) / 2) * sin((a - b) / 2) * (cos(a + b));
	cout << '\n';
	// cout << "z1 = " << z1 << '\n';
	cout << "z2 = " << z2 << '\n';
	cin.get();
	return 0;
}