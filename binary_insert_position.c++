#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 3, 5, 6};
    int n = 4, target = 2;
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target) {
            cout << mid;
            return 0;
        }
        else if (arr[mid] < target)
            low = mid + 1;
        else
            high = mid - 1;
    }

    cout << low;
    return 0;
}