// ������� ��� ���������� � ������ ������� ����� ASCII ��� ��������� ����
#include <iostream>
#include <cctype>
#include <windows.h>

using namespace std;

void handleAsciiDifference(char ������) {
    if (isalpha(������) && ((������ >= 'A' && ������ <= 'Z') || (������ >= 'a' && ������ <= 'z'))) {
        if (islower(������)) {
            cout << "������� ����� ����� �������� � ��������� �����: " << (int)������ - (int)toupper(������) << endl;
        }
        else {
            cout << "������� ����� ����� ��������� � �������� �����: " << (int)������ - (int)tolower(������) << endl;
        }
    }
    else {
        cout << "������: ������ �� ��������� ������." << endl;
    }
}
