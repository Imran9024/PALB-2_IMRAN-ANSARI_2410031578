#include <iostream>
using namespace std;

int main() {
    int arr[] = {6211, 24, 221, 564321};
    int size = 4;

    for (int i = 0; i < size; i++) {
        int n = arr[i];
        int count = 0;

        while (n > 0) {
            n = n / 10;
            count++;
        }

        cout << arr[i] << " = " << count << " digits" << endl;
    }

    return 0;
}