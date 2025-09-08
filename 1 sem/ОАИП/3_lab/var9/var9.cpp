#include <iostream>
int main()
{
	using namespace std;
	float z, u, y=0.5, c=1.4, x=2e-4;
	z = exp(2*x) / (y+3);
	u = sqrt(pow(z, 3) - 0.1 * z); //корень отрицательный,если нужно дейтвительное число-> взять по модулю abs
	cout << "z=" << z << endl;
	cout << "u=" << u << endl;
	return 0;

}