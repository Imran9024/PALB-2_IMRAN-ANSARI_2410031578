#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[100][100];

    for(int i = 0; i < n; i++)
        for(int j = 0; j < m; j++)
            cin >> a[i][j];

    int count = 0;

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {

            if(a[i][j] == 1) {
                int row = 0, col = 0;

                for(int k = 0; k < m; k++)
                    row += a[i][k];

                for(int k = 0; k < n; k++)
                    col += a[k][j];

                if(row == 1 && col == 1)
                    count++;
            }
        }
    }

    cout << count;

    return 0;
}