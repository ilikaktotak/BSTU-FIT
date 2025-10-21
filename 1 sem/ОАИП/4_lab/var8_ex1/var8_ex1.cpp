#include <iomanip>
#include <iostream>
#include <windows.h>
int main()
{
	setlocale(LC_CTYPE, "Russian");
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ: "; cin >> c;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << probel;
	cout << setw(1) << setfill(c) << c << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << probel;
	cout << setw(1) << setfill(c) << c << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << probel;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << probel;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << probel;
	cout << setw(2) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	return 0;
}