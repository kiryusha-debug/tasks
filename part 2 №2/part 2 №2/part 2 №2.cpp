#include <iostream> 
#include <math.h>
#include <windows.h>


using namespace std; 

int main()
{
       cout << "Enter the coordinates of the points and the radius: x1 y1 x2 y2 R ";

    int x1, x2, y1, y2, R; 

               cin >> x1 >> y1 >> x2 >> y2 >> R;                    //The formula for calculating the distance: https://ru.onlinemschool.com/math/library/analytic_geometry/point_point_length/

    if (((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) < R * R)    //If the square of the distance is less than the square of the radius, then the point is inside the circle.
        cout << "In a circle\n";

    if (((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) == R * R)   //If the square of the distance is equal to the square of the radius, the point is on the boundary of the circle.
        cout << "On a circle\n";

    if (((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2)) > R * R)    //If the square of the distance is greater than the square of the radius, the point is outside the circle.
        cout << "Beyond the circle\n";

    system("pause");

    return 0;
}