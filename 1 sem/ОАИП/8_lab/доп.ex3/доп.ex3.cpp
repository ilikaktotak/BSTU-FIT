#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");

    int n;
    cout << "Введите количество чисел (n): ";
    cin >> n;

    if (n <= 2) {
        cout << "Последовательность слишком короткая (или пустая) для поиска элементов между min и max. Количество: 0" << endl;
        return 0;
    }

    std::vector<double> numbers(n);

    cout << "Введите " << n << " чисел:" << endl;
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }

    double min_val = *min_element(numbers.begin(), numbers.end());
    double max_val = *max_element(numbers.begin(), numbers.end());

    if (min_val == max_val) {
        std::cout << "Все числа в последовательности одинаковы. Количество элементов между min и max: 0" << endl;
        return 0;
    }

    int count = 0;

    for (double num : numbers) {
        if (num > min_val && num < max_val) {
            count++;
        }
    }

    cout << "Минимальное значение: " << min_val << endl;
    cout << "Максимальное значение: " << max_val << endl;
    cout << "Количество элементов, стоящих строго между минимальным и максимальным значениями: " << count << endl;

    return 0;
}


