#include <iostream>
using namespace std;

int main() {
    int n, arr[26] = {0};
    cin >> n;
    string s;
    cin >> s;

    for (int i = 0; i < n; i++) {
        int index = s[i] - 'a';
        arr[index]++;
    }

    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < arr[i]; j++) {
            char ch = 'a' + i;
            cout << ch;
        }
    }

    return 0;
}
