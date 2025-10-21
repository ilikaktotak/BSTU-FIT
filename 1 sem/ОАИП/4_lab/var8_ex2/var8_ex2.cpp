#include <iostream>
#include <cmath>
#include <iomanip> 

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    double a, b, c;

    cout << "Введите длины сторон треугольника a, b и c: " << endl;
    cin >> a >> b >> c;

    if (a + b <= c || a + c <= b || b + c <= a) {
        cout << "Треугольник с такими сторонами не существует." << endl;
        return 1; 
    }

    double p = (a + b + c) / 2.0;

    double area = sqrt(p * (p - a) * (p - b) * (p - c));

    cout << fixed << setprecision(2);
    cout << "Площадь треугольника: " << area << endl;

    return 0;
}
