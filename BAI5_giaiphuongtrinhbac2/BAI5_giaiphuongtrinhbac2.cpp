#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	cout << "GIAI PT BAC 2\n";
	double a, b, c, delta, x1, x2;
	cout << "nhap a:"; cin >> a;
	cout << "nhap b:"; cin >> b;
	cout << "nhap c:"; cin >> c;
	if (a == 0)
		// Giai PT bac 1: bx+c=0
		if (b != 0)
		{
			cout << "PT co nghiem duy nhat x=" << -c / b << endl;
		}
		else
		{
			if (c != 0)
			{
				cout << "PT vo nghiem\n";
			}
			else
			{
				cout << "PT vo so nghiem\n";
			}
		}
	else {
		// giai pt bac 2
		else 
		}
}
	
