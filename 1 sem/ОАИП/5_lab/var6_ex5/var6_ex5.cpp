#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int n;
    cout << "Введите три целых числа n: ";
    cin >> n;

    int digit1 = n / 100;
    int digit2 = (n % 100) / 10;
    int digit3 = n % 10;

    if (digit1 == 0 || digit1 == 1 || digit2 == 0 || digit2 == 1 || digit3 == 0 || digit3 == 1) {
        cout << "Да, есть цифра 0 ли 1" << endl;
    }
    else {
        cout << "Нет, нет цифры 0 ли 1" << endl;
    }

    return 0;
}
