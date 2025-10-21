#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int main() {
    double b = -5.4;
    double m = 4.0;
    double u = 0.05 * 1e-4;
    
    double k = 3;
    double step = 0.2;
    int limit = 4;

    while (k <= limit) {
        double v = u + b - 2 * sqrt(0.7 * k + m);
        std::cout << "k = " << k << std::endl;
        k = k + step;
    }

    double w = 100 * exp(-0.2 * u) - log(8.1 * u);
    cout << "w = " << w << endl;

    return 0;
}
