﻿#include <iostream>
#include <cmath>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	double x1, y1, x2, y2;

	cout << "Введите координаты первой точки (x1 y1): ";
	cin >> x1 >> y1;

	cout << "Введите координаты второй точки (x2 y2): ";
	cin >> x2 >> y2;

	double distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

	cout << "Расстояние между точками: " << distance << endl;
	return 0;
}
