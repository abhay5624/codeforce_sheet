#include<bits/stdc++.h>
using namespace std;

long long SumFromM(long long arr[], int m, int n, long long sum) {
    if (n == m) {
        return sum; 
    } else {
        return SumFromM(arr, m + 1, n, sum + arr[m]);
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    long long sum = SumFromM(arr, n-m, n, 0); 
    cout << sum;
    return 0;
}
