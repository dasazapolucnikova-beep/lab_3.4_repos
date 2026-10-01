#include <iostream>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double y; // вхідний параметр
	double R; // радіус кола
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R = "; cin >> R;

	// розгалуження в повній формі
	if ((x*x)+(y*y)<= (R*R) && y>= (x-1)*(x-1) && x>=0 &&  y>=0 ||
		(x*x)+(y*y)<=(R*R)&& x<=0 && y<=0 )
		cout << "yes" << endl;
	else
		cout << "no" << endl;
	cin.get();
	return 0;
}