#include <iostream>
#include <iomanip> 
int main()
{
	setlocale(LC_CTYPE, "Russian");
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ: "; cin >> c;
	cout << setw(11) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(4) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(3) << setfill(probel) << probel;
	/*cout << setw(3) << setfill(probel) << probel;
	cout << setw(5) << setfill(c) << c << endl;
	cout << setw(7) << setfill(probel) << probel;
	cout << setw(9) << setfill(c) << c << endl;
	cout << setw(20) << setfill(probel) << probel;
	cout << setw(16) << setfill(c) << c << endl;*/

//	cout << setw(53) << setfill(probel) << probel;
//	cout << setw(14) << setfill(c) << c << endl;
//	cout << setw(54) << setfill(probel) << probel;
//	cout << setw(12) << setfill(c) << c << endl;
//	cout << setw(55) << setfill(probel) << probel;
//	cout << setw(10) << setfill(c) << c << endl;
//	cout << setw(55) << setfill(probel) << probel;
}