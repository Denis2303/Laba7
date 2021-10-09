#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL, "rus");
	double x, a;
	cout <<"Введите сперва положительный вес, а затем положительную цену конфет: ";
	cin >> x >> a;
	double b, c;
	b = a / x;
	cout <<"Один килограмм конфет стоит - " << b << endl;
	cout << "Введите вес конфет, которые вы хотите купить: ";
	cin >> c;
	double d;
	d = b * c;
	cout << "Стоимость ваших конфет - " << d;
}
