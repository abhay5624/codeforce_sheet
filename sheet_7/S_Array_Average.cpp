#include<iostream>
#include <iomanip>
using namespace std;

long long summation(int arr[], int n) {
    if (n > 0) {
        return arr[n] + summation(arr, n - 1);
    } else {
        return arr[0];
    }
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    double sum = summation(arr, n - 1);
    double average = sum / n;
    cout << fixed << setprecision(6) << average;
    return 0;
}
