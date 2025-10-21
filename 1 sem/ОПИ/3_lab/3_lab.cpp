#include <iostream>
#include <string>
#include <locale>
#include <codecvt>
// IlyinaDarya2007
// 49 6C 79 69 6E 61 44 61 72 79 61 32 30 30 37
// UTF-8: 49 6C 79 69 6E 61 44 61 72 79 61 32 30 30 37
// UTF - 16: 0049 006C 0079 0069 006E 0061 0044 0061 0072 0079 0061 0032 0030 0030 0037

// ИльинаДарьяСергеевна2007
// C8 EB D8 E8 ED E0 C4 E0 F0 D8 FF D1 E5 F0 E3 E5 E5 E2 ED E0 32 30 30 37
//UTF-8: D0 98 D0 BB D1 8C D0 B8 D0 BD D0 B0 D0 94 D0 B0 D1 80 D1 8C D1 8F D0 A1 D0 B5 D1 80 D0 B3 D0 B5 D0 B5 D0 B2 D0 BD D0 B0 32 30 30 37
//UTF - 16(BE): 0418 043B 044C 0438 043D 0430 0414 0430 0440 044C 044F 0421 0435 0440 0433 0435 0435 0432 043D 0430 0032 0030 0030 0037

// Ильина2007Darya
// C8 EB D8 E8 ED E0 32 30 30 37 44 61 72 79 61
//UTF-8: D0 98 D0 BB D1 8C D0 B8 D0 BD D0 B0 32 30 30 37 44 61 72 79 61
//UTF -16(BE): 0418 043B 044C 0438 043D 0430 0032 0030 0030 0037 0044 0061 0072 0079 0061

int main()
{
	int namber = 0x12345678;
	char hello[] = "Hello";

	std::string lfie = "IlyinaDarya2007";
	std::string rfie = "ИльинаДарьяСергеевна2007";
	std::string lr = "Ильина2007Darya";

	std::wstring Lfie = L"IlyinaDarya2007";
	std::wstring Rfie = L"ИльинаДарьяСергеевна2007";
	std::wstring LR = L"Ильина2007Darya";
  
	std::cout << hello << lfie << std::endl;

	std::locale loc("ru_RU.UTF-8");
	std::wcout.imbue(loc);

	std::wcout << Lfie << std::endl;

	return 0;
}