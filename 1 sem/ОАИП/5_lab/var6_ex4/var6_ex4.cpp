#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int k, f, t;

    cout << "Введите три целых числа k, f, t: ";
    cin >> k >> f >> t;

    // Проверка k на кратность к f и t
    if (k != 0) {
        if (f % k == 0) {
            cout << f << " кратно " << k << endl;
        }
        if (t % k == 0) {
            cout << t << " кратно " << k << endl;
        }
    }

    // Проверка f на кратность к k и t
    if (f != 0) {
        if (k % f == 0) {
            cout << k << " кратно " << f << endl;
        }
        if (t % f == 0) {
            cout << t << " кратно " << f << endl;
        }
    }

    // Проверка t на кратность к k и f
    if (t != 0) {
        if (k % t == 0) {
            cout << k << " кратно " << t << endl;
        }
        if (f % t == 0) {
            cout << f << " кратно " << t << endl;
        }
    }

    return 0;
}
