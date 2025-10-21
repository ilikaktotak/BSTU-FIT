#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int number;
    cout << "Введите число: ";
    cin >> number;

    while (number > 0) {
        int digit = number % 10;
        if (digit != 3 && digit != 6) {
            cout << digit;
        }
        number /= 10;
    }
    cout << endl;
    return 0;
}
