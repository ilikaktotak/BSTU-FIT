// ������� ��� ������ ���� ��������� �����
#include <iostream>
#include <cctype>
#include <windows.h>

using namespace std;

void handleDigitCode(char ������) {
    if (isdigit(������)) {
        cout << "��� ������� " << ������ << ": " << (int)������ << endl;
    }
    else {
        cout << "������: ������� �� �����." << endl;
    }
}

