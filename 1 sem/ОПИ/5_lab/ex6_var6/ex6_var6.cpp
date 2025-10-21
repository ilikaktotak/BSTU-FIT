#include <iostream>
#include <string>
#include <vector>

using namespace std;

struct Personazh {
	string imya;
	int sila;
};

void deystvie(const string& personazh, const string& deistvie) {
	cout << personazh << " " << deistvie << endl;
}

int main() {
	setlocale(LC_ALL, "Russian");
	vector<Personazh> personazhi;
	personazhi.push_back({ "Дедка", 5 });
	personazhi.push_back({ "Бабка", 3 });
	personazhi.push_back({ "Внучка", 2 });
	personazhi.push_back({ "Жучка", 1 });
	personazhi.push_back({ "Кошка", 1 });
	personazhi.push_back({ "Мышка", 1 });

	int obshaya_sila = 0;

	cout << "Сказка о Репке начинается!" << endl;

	deystvie("Дедка", "посадил Репку.");
	deystvie("Репка", "выросла большая-пребольшая!");
	deystvie("Дедка", "стал тянуть Репку.");
	deystvie("Дедка", "тянет-потянет, вытянуть не может.");

	obshaya_sila += personazhi[0].sila; 

	deystvie("Дедка", "позвал Бабку.");
	obshaya_sila += personazhi[1].sila;

	deystvie("Бабка", "за Дедку.");
	deystvie("Дедка", "за Репку.");
	deystvie("Тянут-потянут", "вытянуть не могут.");


	deystvie("Бабка", "позвала Внучку.");
	obshaya_sila += personazhi[2].sila; 

	deystvie("Внучка", "за Бабку.");
	deystvie("Бабка", "за Дедку.");
	deystvie("Дедка", "за Репку.");
	deystvie("Тянут-потянут", "вытянуть не могут.");
	deystvie("Внучка", "позвала Жучку.");
	obshaya_sila += personazhi[3].sila;

	deystvie("Жучка", "за Внучку.");
	deystvie("Внучка", "за Бабку.");
	deystvie("Бабка", "за Дедку.");
	deystvie("Дедка", "за Репку.");
	deystvie("Тянут-потянут", "вытянуть не могут.");

	deystvie("Жучка", "позвала Кошку.");
	obshaya_sila += personazhi[4].sila; 

	deystvie("Кошка", "за Жучку.");
	deystvie("Жучка", "за Внучку.");
	deystvie("Внучка", "за Бабку.");
	deystvie("Бабка", "за Дедку.");
	deystvie("Дедка", "за Репку.");
	deystvie("Тянут-потянут", "вытянуть не могут.");

	deystvie("Кошка", "позвала Мышку.");
	obshaya_sila += personazhi[5].sila;

	deystvie("Мышка", "за Кошку.");
	deystvie("Кошка", "за Жучку.");
	deystvie("Жучка", "за Внучку.");
	deystvie("Внучка", "за Бабку.");
	deystvie("Бабка", "за Дедку.");
	deystvie("Дедка", "за Репку.");

	cout << "Все вместе тянут..." << endl;
	cout << "... и вытянули Репку!" << endl;
	cout << "Конец сказки." << endl;
	cout << "Общая сила :" << obshaya_sila << endl;

	return 0;
}