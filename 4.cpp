#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL,"rus");
	double v1, v2, s, t;
	cout << "������� �������� ������� ����������: ";
	cin >> v1;
	cout << "������� �������� ������� ����������: ";
	cin >> v2;
	cout << "������� ���������� ����� ������������: ";
	cin >> s;
	cout << "������� ���������� �����: ";
	cin >> t;
	double x = v1 + v2;
	x = t * x + s;
	cout << "���������� ����� ������������ ����� t ����� = " << x;
}
