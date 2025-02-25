#include <iostream>
#include <conio.h>
#include <stdio.h>


using namespace std;

int main()
{
    float a, b, c, d, k, x1, x2, y1, y2;
    setlocale(0, "");
    cout << "y = ax^2+bx+c - the first equation. Enter the coefficients a, b, c" << endl;
    cout << "a = "; cin >> a; cout << "b = "; cin >> b; cout << "c = ";cin >> c;
    cout << "y = dx+k - the second equation. Enter the coefficients d, k" << endl;
    cout << "d = "; cin >> d; cout << "k = "; cin >> k;
    x1 = (-(b - d) + sqrt(pow((b - d), 2) - 4 * a * (c - k))) / (2 * a);
    x2 = (-(b - d) - sqrt(pow((b - d), 2) - 4 * a * (c - k))) / (2 * a);
    y1 = d * x1 + k;
    y2 = d * x2 + k;
    if (x1 == x2) cout << "The point of intersection of two given lines: [" << x1 << ", " << y1 << "]" << endl;
    else
        cout << "These lines have two points of intersection.:" << endl << "[" << x1 << ", " << y1 << "] и "
        << "[" << x2 << ", " << y2 << "]" << endl;
}