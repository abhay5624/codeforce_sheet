#include <iostream>
using namespace std;
void decimalToBinary(int n) {
    if (n > 1) {
        decimalToBinary(n / 2);
    }
   cout << n % 2;
}

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i) {
        int n;
        cin >> n;
        decimalToBinary(n);
        cout << endl;  
    }

    return 0;
}
