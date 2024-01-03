#include<bits/stdc++.h>
using namespace std;

void Left_max(int arr[], int x, int n, int currentMax) {
    if (x > n) {
        return;
    }
    currentMax = max(currentMax, arr[x - 1]);
    cout << currentMax << " ";    
    Left_max(arr, x + 1, n, currentMax);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Left_max(arr, 1, n, INT_MIN);
    return 0;
}
