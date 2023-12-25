#include <iostream>
#include <string>
using namespace std;
int main() {
    int N;
    cin >> N;
    string digits;
    cin >> digits;
    int sumDigits = 0;
    for (int i = 0; i < N; ++i) {
       
        sumDigits += digits[i] - '0';
    }
    cout << sumDigits << std::endl;
    return 0;
}
