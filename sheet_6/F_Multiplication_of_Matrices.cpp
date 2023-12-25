#include<iostream>
using namespace std;

int main() {
    int n1, r1, n2, r2;
    cin >> n1 >> r1;
    int arr[n1][r1];
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < r1; j++) {
            cin >> arr[i][j];
        }
    }
    cin >> n2 >> r2;
    int arr2[n2][r2];
    for (int i = 0; i < n2; i++) {
        for (int j = 0; j < r2; j++) {
            cin >> arr2[i][j];
        }
    }
    int result[n1][r2]; 
    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < r2; ++j) {
            result[i][j] = 0;
        }
    }
    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < r2; ++j) {
            for (int k = 0; k < r1; ++k) {
                result[i][j] += arr[i][k] * arr2[k][j];
            }
        }
    }
    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < r2; ++j) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
