// Функция для вычисления и вывода разницы кодов Windows-1251 для русских букв
#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

void handleWindows1251Difference(char символ) {
    if ((unsigned char)символ >= 192 && (unsigned char)символ <= 255) {
        if ((unsigned char)символ >= 224 && (unsigned char)символ <= 255) {
            char lowercase_version = символ - 32;
            cout << "Разница кодов прописной и строчной буквы: " << (int)(unsigned char)lowercase_version - (int)(unsigned char)символ << endl;
        }
        else if ((unsigned char)символ >= 192 && (unsigned char)символ <= 223) {
            char uppercase_version = символ + 32;
            cout << "Разница кодов прописной и строчной буквы: " << (int)(unsigned char)символ - (int)(unsigned char)uppercase_version << endl;
        }
        else {
            cout << "Ошибка: введен неверный символ." << endl;
        }
    }
    else {
        cout << "Ошибка: введен неверный символ. Введите символ русского алфавита в кодировке Windows-1251." << endl;
    }
}
