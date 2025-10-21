#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

int main() {
    setlocale(LC_CTYPE, "Russian");
    // a
    int n = 5;
    vector<double> x = { 2.7, -5, 4, 3.5, -7 };

    double a_sum = 0;
    for (double val : x) {
        if (val > 0) {
            a_sum += val;
        }
    }

    // b
    double b_prod = 1;
    for (double val : x) {
        if (val <= 0) {
            b_prod *= val;
        }
    }

    cout << "a (сумма всех x > 0): " << a_sum << endl;
    cout << "b (произведение всех элементов x <= 0): " << b_prod << endl;



    vector<double> x2 = { 5.1, 6.4, 3, 2, 6 };

    //a
    double a_min = x2[0];
    for (double val : x2) {
        a_min = min(a_min, val);
    }

    //c
    double c = a_min;
    for (double val : x2) {
        c += val / (1 + val);
    }

    cout << "a (min x): " << a_min << endl;
    cout << "c: " << c << endl;



    return 0;
}
