#include <iostream>
using namespace std;

int main() {
    int arr[5];

    cout << "Enter 5 numbers: ";

    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    int sum;
    cin >>sum;

    cout << "All possible pairs:" << endl;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++){
            if (arr[i] + arr[j] == sum)
            
                {cout << "(" << arr[i] << ", " << arr[j] << ")" <<arr[i]+arr[j]<< endl;
                }
            
        }
    }

    return 0;
}