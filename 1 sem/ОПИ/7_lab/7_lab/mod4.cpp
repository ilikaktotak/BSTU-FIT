// ������� ��� ����������� ���� � ��������� ������ ������������
#include <iostream>
#include <cctype>
#include <windows.h>

using namespace std;

int displayMenu() {
    int �����;
    cout << "�������� ��������:" << endl;
    cout << "1 - ������� ����� ASCII ��� ��������� ����" << endl;
    cout << "2 - ������� ����� Windows-1251 ��� ������� ����" << endl;
    cout << "3 - ����� ���� ��������� �����" << endl;
    cout << "4 - �����" << endl;
    cin >> �����;
    return �����;
}

