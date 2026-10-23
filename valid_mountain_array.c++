#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 3, 1};
    int n = 5, i = 0;

    while (i < n - 1 && arr[i] < arr[i + 1])
        i++;

    if (i == 0 || i == n - 1) {
        cout << "Not Valid Mountain";
        return 0;
    }

    while (i < n - 1 && arr[i] > arr[i + 1])
        i++;

    if (i == n - 1)
        cout << "Valid Mountain";
    else
        cout << "Not Valid Mountain";

    return 0;
}