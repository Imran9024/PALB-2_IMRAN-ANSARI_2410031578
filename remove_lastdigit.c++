#include <iostream>
using namespace std;

int main() {
    int n = 6211;

    while (n > 0) {
        cout << n << endl;
        n = n / 10;
    }

    cout << 0 << endl;

    return 0;
}