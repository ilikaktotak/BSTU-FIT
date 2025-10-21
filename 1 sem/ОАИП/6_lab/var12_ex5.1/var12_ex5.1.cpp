#include <iostream>
#include <string>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    int k;
    string sequence = "";
    long long power_of_2 = 1;

    cout << "Введите k: ";
    cin >> k;

    while (sequence.length() < k) {
        sequence += to_string(power_of_2);
        power_of_2 *= 2;
    }

    cout << sequence[k - 1] << endl;
    return 0;
}
