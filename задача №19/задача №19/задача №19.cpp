#include <iostream>
#include <cmath>  // Для функции sqrt

// Структура для представления точки в 3D пространстве
struct Point {
    double x, y, z;
};

// Функция для вычисления расстояния между двумя точками
double distance(Point a, Point b) {
    return sqrt(pow(b.x - a.x, 2) + pow(b.y - a.y, 2) + pow(b.z - a.z, 2));
}

int main() {
    setlocale(LC_ALL, "rus");
    // Объявляем 2 точки для ввода координат соседних вершин куба
    Point p1, p2;

    // Вводим координаты первой вершины
    std::cout << "Введите координаты первой вершины (x1, y1, z1): ";
    std::cin >> p1.x >> p1.y >> p1.z;

    // Вводим координаты второй вершины
    std::cout << "Введите координаты второй вершины (x2, y2, z2): ";
    std::cin >> p2.x >> p2.y >> p2.z;

    // Вычисляем длину ребра куба
    double edgeLength = distance(p1, p2);

    // Вычисляем объем куба
    double volume = pow(edgeLength, 3);

    // Выводим результат
    std::cout << "Объем куба: " << volume << std::endl;

    return 0;
}