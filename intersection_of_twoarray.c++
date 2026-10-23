#include <iostream>
using namespace std;

int main() {
    int a[] = {1, 2, 2, 1};
    int b[] = {2, 2};
    int m = 4, n = 2;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i] == b[j]) {
                cout << a[i] << " ";
                break;
            }
        }
    }

    return 0;
}