#include <iostream>
#include <windows.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);
    char ch;
    cout << "Введите символ: ";
    cin.get(ch);

    unsigned char uch = ch;
    int code = (int)uch;

    cout << "Введённый символ: " << ch << endl;
    cout << "Код символа: " << code << endl;

    if (code >= '0' && code <= '9') {
        cout << "Категория: цифра" << endl;
    }
    else if ((code >= 'A' && code <= 'Z') || (code >= 'a' && code <= 'z')) {
        cout << "Категория: латинская буква" << endl;
    }
    else if ((code >= 192 && code <= 255) || code == 168 || code == 184) {
        cout << "Категория: русская буква" << endl;
    }
    else {
        cout << "Категория: другой символ" << endl;
    }

    return 0;
}
