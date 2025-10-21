#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int num, prev = 1, count = 0; 
    cout << "Введите последовательность (заканчивается 0):" << endl;

    while (cin >> num && num != 0) {
        if (num * prev < 0) {
            count++;
        }
        prev = num;
    }
    cout << "Количество смен знака: " << count << endl;
    return 0;
}

