#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows (m) and columns (n): ";
    cin >> m >> n;

    if (m < 0 || m > 100 || n < 0 || n > 100) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    int arr[100][100];  

    int value = 0;
    for (int i = 0; i < m; i++) {
        if (i % 2 == 0) {
            
            for (int j = 0; j < n; j++) {
                arr[i][j] = value++;
            }
        }
        else {
            
            for (int j = n - 1; j >= 0; j--) {
                arr[i][j] = value++;
            }
        }
    }

   
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << setw(3) << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
