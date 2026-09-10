#include <iostream>
#include <map>
using namespace std;

int main() {
    string str;

    cout << "Enter a string: ";
    getline(cin, str);

    map<char, int> freq;

    // Count frequency
    for (char ch : str) {
        freq[ch]++;
    }

    // Print frequency
    for (auto x : freq) {
        cout << x.first << " = " << x.second << endl;
    }

    return 0;
}