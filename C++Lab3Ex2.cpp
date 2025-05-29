#include <iostream>

using namespace std;

int main() {
    int m, n, k;

    cout << "Enter number of rows (m), columns (n), and border thickness (k): ";
    cin >> m >> n >> k;


    if (k < 1 || k >= m || k >= n || m > 100 || n > 100) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {

            if (i < k || i >= m - k || j < k || j >= n - k) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
