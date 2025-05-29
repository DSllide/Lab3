#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int m, n;
    cout << "Enter number of rows (m) and columns (n): ";
    cin >> m >> n;

    if (m < 1 || m > 100 || n < 1 || n > 100) {
        cout << "Invalid input!" << endl;
        return 1;
    }

    int arr[100][100] = { 0 };

    int top = 0, bottom = m - 1;
    int left = 0, right = n - 1;
    int value = 0;

    while (top <= bottom && left <= right) {
       
        for (int j = left; j <= right; j++) {
            arr[top][j] = value++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            arr[i][right] = value++;
        }
        right--;

        if (top <= bottom) {
            for (int j = right; j >= left; j--) {
                arr[bottom][j] = value++;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                arr[i][left] = value++;
            }
            left++;
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
