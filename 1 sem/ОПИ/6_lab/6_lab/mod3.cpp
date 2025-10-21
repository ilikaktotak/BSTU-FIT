// Функция для вывода кода введенной цифры
#include <iostream>
#include <cctype>
#include <windows.h>

using namespace std;

void handleDigitCode(char символ) {
    if (isdigit(символ)) {
        cout << "Код символа " << символ << ": " << (int)символ << endl;
    }
    else {
        cout << "Ошибка: Введена не цифра." << endl;
    }
}

