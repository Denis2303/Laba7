#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "rus");
	double a,b;
	cout << "������� �������� ����������� A: ";
	cin >> a;
	cout << "������� �������� B: ";
	cin >> b;
	double x;
	x = -b / a;
	cout << "x = " << x;
}
