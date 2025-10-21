#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int month;

    cout << "Введите номер месяца (1-12): ";
    cin >> month;

    if (month >= 3 && month <= 5) {
        cout << "Весна" << endl;
    }
    else if (month >= 6 && month <= 8) {
        cout << "Лето" << endl;
    }
    else if (month >= 9 && month <= 11) {
        cout << "Осень" << endl;
    }
    else if (month == 12 || month == 1 || month == 2) {
        cout << "Зима" << endl;
    }
    else {
        cout << "Некорректный номер месяца" << endl;
    }

    return 0;
}
