#include <iostream>
#include <math.h> 
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double p,a;
	double S;

	cin >> p; // entering the perimeter
	if (cin.fail())
		cout << "Mistake: You didn't enter a number" << endl;
	else if (p <= 0)
		cout << "Error: the entered number is not positive" << endl;
	system("pause");
	a = p / 3;

	S = a * a * sqrt(3.0) / 4.0; // I calculate the area using the formula - sqrt (3.0) - the square root of 3
	cout << S << endl; 
	system("pause");

	return 0;
}
