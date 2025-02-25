#include <iostream>
#include <cmath> 

using namespace std;

int main() {

    setlocale(LC_ALL, "rus");

    double a, c, b, area;

    cout << "Введите длину катета: ";
    cin >> a;
    cout << "Введите длину гипотенузы: ";
    cin >> c;

    b = sqrt(c * c - a * a);  //We calculate the length of the second leg using the Pythagorean theorem

    area = 0.5 * a * b;  //Calculating the area of the triangle

    cout << "Площадь треугольника: " << area << endl;

    return 0;
}