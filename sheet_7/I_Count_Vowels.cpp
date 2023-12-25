#include<iostream>
using namespace std;

int countVowel(string s, int n, int count) {
    if (s[n] != '\0') {
        if ((s[n] >= 'a' && s[n] <= 'u') || (s[n] >= 'A' &&  s[n] <= 'U')) {
             return countVowel(s, n + 1, count + 1);
        } else {
             return countVowel(s, n + 1, count);
        }
    } else {
         return count;
    }
}

int main() {
    string s;
    cin >> s;
    int result = countVowel(s, 0, 0);
    cout << result << endl;
    return 0;
}
