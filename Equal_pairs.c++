#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 numbers: ";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }

    cout << "Equal pairs:" << endl;

    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] == arr[j]) {
                cout << "(" << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }

    return 0;
}