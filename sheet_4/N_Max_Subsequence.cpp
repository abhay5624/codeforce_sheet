#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    string S;
    cin >> S;
    int maxSubsequenceSize = 1;  
    for (int i = 1; i < N; i++) {
        if (S[i] != S[i - 1]) {
             maxSubsequenceSize++;
        }
    }
    cout << maxSubsequenceSize << endl;
    return 0;
}
