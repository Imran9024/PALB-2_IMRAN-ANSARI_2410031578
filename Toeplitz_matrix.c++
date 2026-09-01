#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int mat[100][100];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }

    bool isToeplitz = true;

    for (int i = 1; i < n && isToeplitz; i++) {
        for (int j = 1; j < m; j++) {
            if (mat[i][j] != mat[i - 1][j - 1]) {
                isToeplitz = false;
                break;
            }
        }
    }

    if (isToeplitz)
        cout << "Yes";
    else
        cout << "No";

    return 0;
}