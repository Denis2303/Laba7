#include <iostream>
#include <cmath>
using namespace std;
int main(){
	setlocale(LC_ALL,"rus");
	const double pi = acos(-1.0);
	double a;
	cout <<"������� �������� ���� � ��������: ";
	cin >> a;
	double b = a * 180 / pi;
	cout << b;
}
