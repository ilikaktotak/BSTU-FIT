#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    double b = -5.4;
    double u = 0.05 * 1e-4;
   
    double k = 7;
    double step = 0.2;
    int limit = 8;

    vector<double> m = { -1.3, -2, 4.9 };

    for (double mi : m) {
        double v = u + b - 2 * sqrt(0.7 * k + mi);
        cout << "v = " << v << " (k = " << mi << ")" << endl;
    }

    double w = 100 * exp(-0.2 * u) - log(8.1 * u);
    cout << "w = " << w << endl;

    return 0;
}
