#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> ln;
    string s;
    cin >> s;
    int length = 0;
    int count = 0;
    for (int i = 0; i < s.length() - 1; i++) {
        if (s[i] == 'L' && s[i + 1] == 'R') {
            
            count++;
            ln.push_back(length + 1);  
            length = 0;  
        } else if (s[i] == 'L') {
            length++;
        }
    }
    cout << count << endl;
    for (auto &j : ln) {
        for (int i = 0; i < j; i++) {
            cout << 'L';
        }
        for (int i = 0; i < j; i++) {
            cout << 'R';
        }
        cout << endl;
    }
    return 0;
}
