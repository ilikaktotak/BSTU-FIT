// Функция для отображения меню и получения выбора пользователя
#include <iostream>
#include <cctype>
#include <windows.h>

using namespace std;

int displayMenu() {
    int выбор;
    cout << "Выберите действие:" << endl;
    cout << "1 - Разница кодов ASCII для латинских букв" << endl;
    cout << "2 - Разница кодов Windows-1251 для русских букв" << endl;
    cout << "3 - Вывод кода введенной цифры" << endl;
    cout << "4 - Выход" << endl;
    cin >> выбор;
    return выбор;
}

