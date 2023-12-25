#include<iostream>
using namespace std;
int main() {
    long long a, b, gcd = 1;
    cin>>a>>b;
    for (int i = min(a, b); i > 1; i--) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
            break;   
        }
    }
    cout << gcd <<" "<< (a * b) / gcd << endl;
    return 0;
}
