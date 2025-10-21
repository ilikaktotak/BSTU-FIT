#include <iostream>
#include <iomanip>
#include <stdio.h>
using namespace std;

int main() {
    int n, i, j;
    printf("Enter n: ");
    scanf_s("%d", &n);

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n; j++) {
            printf("%5d", i * j);
        }

        cout << endl;
        if (i == 1) {
            cout << setw(5 * n) << setfill('-') << "-" << endl;
            cout << setfill('-');
        }
        printf("\n");
    }
    cout << setw(5 * n / 2) << right << "--- End ---" << endl;
    return 0;
}

