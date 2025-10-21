// Функция для вычисления и вывода разницы кодов ASCII для латинских букв
#include <iostream>
#include <cctype>
#include <windows.h>

using namespace std;

void handleAsciiDifference(char символ) {
    if (isalpha(символ) && ((символ >= 'A' && символ <= 'Z') || (символ >= 'a' && символ <= 'z'))) {
        if (islower(символ)) {
            cout << "Разница между кодом строчной и прописной буквы: " << (int)символ - (int)toupper(символ) << endl;
        }
        else {
            cout << "Разница между кодом прописной и строчной буквы: " << (int)символ - (int)tolower(символ) << endl;
        }
    }
    else {
        cout << "Ошибка: Введен не латинский символ." << endl;
    }
}
