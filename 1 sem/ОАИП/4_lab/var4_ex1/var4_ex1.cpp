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
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(13) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;

	return 0;
}