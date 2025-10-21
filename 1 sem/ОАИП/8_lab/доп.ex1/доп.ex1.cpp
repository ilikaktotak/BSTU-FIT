#include <iostream>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");

    int n;
    cout << "Введите количество чисел (n): ";
    cin >> n; 

    int sum_even = 0;

    cout << "Введите " << n << " целых чисел:" << endl;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num; 

        if (num % 2 == 0) {
            sum_even += num;
        }
    }

    std::cout << "Сумма четных элементов: " << sum_even << endl;

    return 0;
}


