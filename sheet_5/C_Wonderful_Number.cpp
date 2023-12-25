#include <iostream>

using namespace std;

bool isOdd(int a) {
    return a % 2 == 1;
}

long long reverseBinary(long long n) {
    long long reversedBinary = 0;
    while (n != 0) {
        reversedBinary = (reversedBinary << 1) | (n & 1);
        n = n >> 1;
    }
    return reversedBinary;
}

void checkWonderful(int n) {
    if (isOdd(n)) {
        long long binaryRepresentation = reverseBinary(n);

        if (binaryRepresentation == n) {
            cout << "YES";
        } else {
            cout << "NO";
        }
    }else{
         cout << "NO";
    }
}

int main() {
        int number;
        cin >> number;
        checkWonderful(number);
        return 0;
}
