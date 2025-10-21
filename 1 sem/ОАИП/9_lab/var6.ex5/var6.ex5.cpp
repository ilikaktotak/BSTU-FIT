#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double f(double x) {
    return 1.0 + x * x * x;
}

double trapezoidal(double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.5 * (f(a) + f(b));
    for (int i = 1; i < n; ++i) {
        sum += f(a + i * h);
    }
    return sum * h;
}

double parabola(double a, double b, int n) {
    if (n % 2 != 0) ++n;
    double h = (b - a) / n;
    double sum = f(a) + f(b);
    for (int i = 1; i < n; ++i) {
        double x = a + i * h;
        sum += (i % 2 == 0) ? 2.0 * f(x) : 4.0 * f(x);
    }
    return sum * h / 3.0;
}

int main() {
    setlocale(LC_CTYPE, "Russian");

    double a = 1.0, b = 5.0;
    int n = 200;

    double s_trap = trapezoidal(a, b, n);
    double s_parab = parabola(a, b, n);
    double s_exact = (b + b * b * b * b / 4.0) - (a + a * a * a * a / 4.0); // x + x^4/4 от a до b

    cout << std::fixed << std::setprecision(10);
    cout << "Метод трапеций: S = " << s_trap << endl;
    cout << "Метод парабол: S = " << s_parab << endl;
    cout << "Точное значение: S = " << s_exact << endl;
    cout << "Погрешность (трапеции): " << std::fabs(s_trap - s_exact) << endl;
    cout << "Погрешность (порабол): " << std::fabs(s_parab - s_exact)<< endl;

    return 0;
}


