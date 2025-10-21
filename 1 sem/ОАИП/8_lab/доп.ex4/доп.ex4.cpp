#include <iostream>
#include <vector>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");

    vector<int> sequence;
    int number;

    cout << "Введите последовательность целых чисел (через пробел, ввод завершается не-числовым значением):" << endl;
    while (cin >> number) {
        sequence.push_back(number);
    }

    int signChanges = 0;
    int previousSign = 0; 

    for (int num : sequence) {
        int currentSign = 0;
        if (num > 0) {
            currentSign = 1;
        }
        else if (num < 0) {
            currentSign = -1; 
        }

        if (currentSign != 0 && previousSign != 0 && currentSign != previousSign) {
            signChanges++;
        }

        if (currentSign != 0) {
            previousSign = currentSign; 
        }
    }

    cout << "Число чередований знака: " << signChanges << endl;

    return 0;
}



