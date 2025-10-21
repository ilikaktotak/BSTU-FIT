#include <iostream>

using namespace std;

int main() {
	setlocale(LC_CTYPE, "Russian");
	int n, k;

	cout << "Введите количество школьников: ";
	cin >> n;

	cout << "Введите количество яблок: ";
	cin >> k;

	int applesPerStudent = k / n;
	int remainder = k % n;

	cout << "Каждому школьнику достанется: " << applesPerStudent << " яблок." << endl;
	cout << "В корзинке останется: " << remainder << " яблок." << endl;

	return 0;
}
