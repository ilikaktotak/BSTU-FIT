#include <iostream>
int main()
{
	using namespace std;
	float y, r, a = 1/75, b = 4.5e-4;
	y = a*exp(-2*b) - sqrt(1+a);
	r = log(1 + 20 * b) / (1 + a);
	cout << "y=" << y << endl;
	cout << "r=" << r << endl;
	return 0;

}