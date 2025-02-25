#include <iostream>
#include <cmath>  

struct Point {
    double x, y, z;
};

double distance(Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) + pow(b.z - a.z, 2));  //A function for calculating the distance
}

int main() {
    setlocale(LC_ALL, "rus");
  
    Point p1, p2;

    std::cout << "Введите координаты первой вершины (x1, y1, z1): ";
    std::cin >> p1.x >> p1.y >> p1.z;

    std::cout << "Введите координаты второй вершины (x2, y2, z2): ";
    std::cin >> p2.x >> p2.y >> p2.z;

    double edgeLength = distance(p1, p2);  //Calculating the edge length

    double volume = pow(edgeLength, 3);   //Calculating the volume

    std::cout << "Объем куба: " << volume << std::endl;

    system("pause");
    
    return 0;
}
