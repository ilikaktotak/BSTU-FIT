#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    double b = -5.4;
    double m = 4.0;
    double u = 0.05 * 1e-4; 
    vector<double> k = { 6.0, 4.0, 0.3, -7.0 };

    for (double ki : k) {
        double v = u + b - 2 * sqrt(0.7 * ki + m);
        cout << "v = " << v << " (k = " << ki << ")" << endl;
    }

    double w = 100 * exp(-0.2 * u) - log(8.1 * u);
    cout << "w = " << w << endl;

    return 0;
}
