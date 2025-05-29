#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter odd number n (1 < n < 100): ";
    cin >> n;

    if (n < 1 || n > 100 || n % 2 == 0) {
        cout << "Please enter a valid odd number between 1 and 100." << endl;
        return 1;
    }

    int size = 2 * n - 1;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if (i == j || i + j == size - 1 || i == n - 1 || j == n - 1)
                cout << '*';
            else
                cout << ' ';
        }
        cout << endl;
    }

    return 0;
}
