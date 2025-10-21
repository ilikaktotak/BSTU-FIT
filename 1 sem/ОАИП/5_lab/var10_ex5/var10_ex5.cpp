#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int number;

    cout << "Введите трехзначное число: ";
    cin >> number;

    int digit1 = number / 100;       
    int digit2 = (number / 10) % 10;  
    int digit3 = number % 10;        

    int sum = digit1 + digit2 + digit3;

    if (sum % 3 == 0) {
        cout << "Сумма цифр (" << sum << ") делится на 3. Число " << number << " делится на 3." << endl;
    }
    else {
        cout << "Сумма цифр (" << sum << ") не делится на 3. Число " << number << " не делится на 3." << endl;
    }

    return 0;
}
