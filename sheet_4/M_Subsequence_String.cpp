#include <iostream>
using namespace std;

int main() {
    string word;
    cin >> word;

    string target = "hello";
    int targetIndex = 0;  

    for (int i = 0; i < word.length(); i++) {
        if (word[i] == target[targetIndex]) {
            targetIndex++;
        }
        if (targetIndex == target.length()) {
            cout << "YES" << endl;
            return 0; 
        }
    }
    cout << "NO" << endl;

    return 0;
}
