#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "rus");
	double x, a;
	cout <<"������� ������ ������������� ���, � ����� ������������� ���� ������: ";
	cin >> x >> a;
	double b, c;
	b = a / x;
	cout <<"���� ��������� ������ ����� - " << b << endl;
	cout << "������� ��� ������, ������� �� ������ ������: ";
	cin >> c;
	double d;
	d = b * c;
	cout << "��������� ����� ������ - " << d;
}
