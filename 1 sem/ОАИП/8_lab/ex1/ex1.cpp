#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    double a1, a2, a3, a4;

    cout << "Введите четыре значения для переменной 'a':";
    cout << "Введите первое значение: ";
    cin >> a1;
    cout << "Введите второе значение: ";
    cin >> a2;
    cout << "Введите третье значение: ";
    cin >> a3;
    cout << "Введите четвертое значение: ";
    cin >> a4;


    double sumOfSquares = (a1 * a1) + (a2 * a2) + (a3 * a3) + (a4 * a4);
    double productOfValues = a1 * a2 * a3 * a4;

    cout << a1 << ", " << a2 << ", " << a3 << ", " << a4 << endl;
    cout << "Сумма квадратов: " << sumOfSquares << endl;
    cout << "Произведение значений: " << productOfValues << endl;

    int n;
    cout << "Введите число факториала:";
    cin >> n;
    long long f = 1;
    for (int i = 1; i <= n; ++i) f *= i;
    cout << "Факториал" << f << std::endl;

    return 0;
}

