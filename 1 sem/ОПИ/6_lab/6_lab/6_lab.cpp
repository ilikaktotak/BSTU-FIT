#include <iostream>
#include <cctype>
#include <locale>
#include <windows.h>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H
void handleAsciiDifference(char символ);
void handleWindows1251Difference(char символ);
void handleDigitCode(char символ);
int displayMenu();

#endif
using namespace std;

int main() {
    int выбор;
    char символ;
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    while (true) {
        выбор = displayMenu();

        if (выбор == 4) {
            cout << "Выход из программы." << endl;
            break;
        }

        cout << "Введите символ: ";
        cin >> символ;

        switch (выбор) {
        case 1:
            handleAsciiDifference(символ);
            break;
        case 2:
            handleWindows1251Difference(символ);
            break;
        case 3:
            handleDigitCode(символ);
            break;
        default:
            cout << "Ошибка: Неверный выбор действия." << endl;
        }
    }

    return 0;
}
