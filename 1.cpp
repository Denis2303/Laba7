#include <iostream>
#include <cmath>
using namespace std;
int main(){
	setlocale(LC_ALL,"rus");
	const double pi = acos(-1.0);
	double a;
	cout << "¬ведите значение угла в градусах: ";
	cin >> a;
	double b = a * pi / 180;
	cout << "«начение вашего угла в радианах = " << b;
}
