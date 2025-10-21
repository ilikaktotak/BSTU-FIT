// ������� ��� ���������� � ������ ������� ����� Windows-1251 ��� ������� ����
#include <iostream>
#include <locale>
#include <windows.h>

using namespace std;

void handleWindows1251Difference(char ������) {
    if ((unsigned char)������ >= 192 && (unsigned char)������ <= 255) {
        if ((unsigned char)������ >= 224 && (unsigned char)������ <= 255) {
            char lowercase_version = ������ - 32;
            cout << "������� ����� ��������� � �������� �����: " << (int)(unsigned char)lowercase_version - (int)(unsigned char)������ << endl;
        }
        else if ((unsigned char)������ >= 192 && (unsigned char)������ <= 223) {
            char uppercase_version = ������ + 32;
            cout << "������� ����� ��������� � �������� �����: " << (int)(unsigned char)������ - (int)(unsigned char)uppercase_version << endl;
        }
        else {
            cout << "������: ������ �������� ������." << endl;
        }
    }
    else {
        cout << "������: ������ �������� ������. ������� ������ �������� �������� � ��������� Windows-1251." << endl;
    }
}
