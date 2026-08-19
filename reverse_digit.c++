#include <iostream>
using namespace std;

int main() {
    int n = 6211;
    int reverse = 0;

    while (n > 0) {
        int lastdigit = n % 10;
        reverse = reverse * 10 + lastdigit;

        cout << n << endl;
        n = n / 10;
    }

    cout << "Reverse = " << reverse << endl;

    return 0;
}