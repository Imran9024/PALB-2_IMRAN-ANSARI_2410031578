#include <iostream>
using namespace std;

int main() {
    int grid[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int ans[3][3];
    int k = 2;
    int n = 3, m = 3;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            int oldPos = i * m + j;
            int newPos = (oldPos + k) % (n * m);

            int newRow = newPos / m;
            int newCol = newPos % m;

            ans[newRow][newCol] = grid[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}