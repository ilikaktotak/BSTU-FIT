#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	double x, y, z;

	cout << "Введите число X: ";
	cin >> x;
	cout << "Введите число Y: ";
	cin >> y;
	cout << "Введите число Z: ";
	cin >> z;

	double abs_x = abs(x);
	double abs_y = abs(y);
	double abs_z = abs(z);

	double average_arithmetic = (abs_x + abs_y + abs_z) / 3.0;

	double average_geometric = cbrt(abs_x * abs_y * abs_z);

	cout << fixed << setprecision(2);
	cout << "Среднее арифметическое модулей: " << average_arithmetic << endl;
	cout << "Среднее геометрическое модулей: " << average_geometric << endl;

	return 0;
}
