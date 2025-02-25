#include <iostream>
#include <math.h> 
using namespace std;
int main()
{
	double p,a;
	double S;
	cin >> p; // вводим периметр
	a = p / 3;
	S = a * a * sqrt(3.0) / 4.0; // вычисляю площадь по формуле - sqrt (3.0) - квадратный корень из 3
	cout << S << endl; // ввожу полученное значение
	system("pause");

	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

