#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "rus");
	double a,b;
	cout << "Введите значение коэффицента A: ";
	cin >> a;
	cout << "Введите значение B: ";
	cin >> b;
	double x;
	x = -b / a;
	cout << "x = " << x;
}
