#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "rus");
	double a1, b1, c1, a2, b2, c2, d1, d2, d, x, y;
	cout << "������� ����������� ������� ���������: ";
	cin >> a1 >> b1 >> c1;
	cout << "������� ����������� ������� ���������: ";
	cin >> a2 >> b2 >> c2;
	d = a1 * b2 - b1 * a2;
	d1 = c1 * b2 - b1 * c2;
	d2 = a1 * c2 - c1 * a2;
	x = d1/d;
	y = d2/d;
	cout << "�������� ������� ��������� �������� �����: " << x <<" " << y;
}
