#include <iostream>

using namespace std;

int main()
{
    int ax, ay, bx, by, cx, cy, dx, dy;
    cout << "enter 8 coordinate points: " << endl;

    cin >> ax >> ay >> bx >> by >> cx >> cy >> dx >> dy;          // Reading coordinates

       int a = (ax - dx) * (by - ay) - (bx - ax) * (ay - dy);
       int b = (bx - dx) * (cy - by) - (cx - bx) * (by - cy);     // the expressions calculate the area of a triangle, taking into account the sign 
       int c = (cx - dx) * (ay - cy) - (ax - cx) * (cy - dy); 
    
   if ((a >= 0 && b >= 0 && c >= 0) ||   // checking the location of a point
       (a <= 0 && b <= 0 && c <= 0))
        
        cout << 1;    // If all three values have the same sign (all ≥ 0 or all ≤ 0), the point is located inside or on the border of the triangle.
   else               //If at least one differs in sign, the point is outside.
        cout << 0;    //Output 1 if the point is inside or on the border of the triangle, otherwise 0

   system("pause");

   return 0;

}