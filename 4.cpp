#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL,"rus");
	double v1, v2, s, t;
	cout << "Введите скорость первого автомобиля: ";
	cin >> v1;
	cout << "Введите скорость второго автомобиля: ";
	cin >> v2;
	cout << "Введите расстояние между автомобилями: ";
	cin >> s;
	cout << "Введите количество часов: ";
	cin >> t;
	double x = v1 + v2;
	x = t * x + s;
	cout << "Расстояние между автомобилями через t часов = " << x;
}
