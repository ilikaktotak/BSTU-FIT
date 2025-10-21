#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int a, b, c, d;

    cout << "Введите четыре целых числа: ";
    cin >> a >> b >> c >> d;

    if (a % 2 == 0 || b % 2 == 0 || c % 2 == 0 || d % 2 == 0) {
        cout << "Среди чисел есть хотя бы одно четное." << endl;
    }
    else {
        cout << "Среди чисел нет четных." << endl;
    }

    return 0;
}
