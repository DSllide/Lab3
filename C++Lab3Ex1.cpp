#include <iostream>

using namespace std;

int main() {
    int m, n;

    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    if (m < 1 || m > 100 || n < 1 || n > 100) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
