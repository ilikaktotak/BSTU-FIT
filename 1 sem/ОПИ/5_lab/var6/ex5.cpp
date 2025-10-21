#include <iostream>
#include <cctype>
#include <locale>
#include <windows.h>

using namespace std;

int main() {
    int выбор;
    char символ;
    setlocale(LC_ALL, "Russian");

    while (true) {
        cout << "Выберите действие:" << endl;
        cout << "1 - Разница кодов ASCII для латинских букв" << endl;
        cout << "2 - Разница кодов Windows-1251 для русских букв" << endl;
        cout << "3 - Вывод кода введенной цифры" << endl;
        cout << "4 - Выход" << endl;
        cin >> выбор;
        if (выбор == 4) {
            cout << "Выход из программы." << endl;
            break;
        }

        SetConsoleOutputCP(1251);
        SetConsoleCP(1251);
        cout << "Введите символ: ";
        cin >> символ;

        if (выбор == 1) {
            // Действие 1: Разница кодов ASCII для латинских букв
            if (isalpha(символ) && ((символ >= 'A' && символ <= 'Z') || (символ >= 'a' && символ <= 'z'))) { //Добавлена проверка именно на латиницу.
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
        else if (выбор == 2) {
            SetConsoleOutputCP(1251);
            SetConsoleCP(1251);
            // Действие 2: Разница кодов Windows-1251 для русских букв
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

        else if (выбор == 3) {
            // Действие 3: Вывод кода введенной цифры
            if (isdigit(символ)) {
                cout << "Код символа " << символ << ": " << (int)символ << endl;
            }
            else {
                cout << "Ошибка: Введена не цифра." << endl;
            }
        }
        else {
            cout << "Ошибка: Неверный выбор действия." << endl;
        }
    }

    return 0;
}