#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    setlocale(LC_ALL, "rus");
    cout << "Введите длины сторон: ";
    double a, b, c, p, s;

    cin >> a >> b >> c;
    p = (a + b + c) / 2; //we find the perimeter
    s = sqrt(p * (p - a) * (p - b) * (p - c)); //we find the area using Heron's Formula
    cout << s << endl;



    system("pause"); 
}

