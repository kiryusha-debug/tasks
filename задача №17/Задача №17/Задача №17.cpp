﻿#include <iostream>

using namespace std;

 int main()
{
     setlocale(0, "Russian");

     float xA, yA, xC, yC, xD, yD, xB, yB, dy, dx, d;

     cout << "Введите координаты вершин квадрата А и С\n";
     cin >> xA >> yA >> xC >> yC;


     dy = yA - yC;
     dx = xC - xA;
     d = (dx - dy) / 2;

     xD = xA + d;
     yD = yC - d;

     xB = xC - d;
     yB = yA + d;

     cout << "A ( " << xA << ";" << yA << " )\n";
     cout << "B ( " << xB << ";" << yB << " )\n";
     cout << "C ( " << xC << ";" << yC << " )\n";
     cout << "D ( " << xD << ";" << yD << " )\n";
     return 0;
}

