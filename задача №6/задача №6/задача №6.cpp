#include <iostream>
#include <math.h>

using namespace std;

int main()
{ 
    setlocale(LC_ALL, "rus");
    int a, b, c, S;
    cout << "Введите первый катет: ";
    cin >> a;
    cout << "Введите второй катет: ";
    cin >> b;
    c = sqrt(a * a + b * b);
    S = a * b / 2;
    cout << "Гипотенуза равна: " << c << ", Площадь равна: " << S;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"
