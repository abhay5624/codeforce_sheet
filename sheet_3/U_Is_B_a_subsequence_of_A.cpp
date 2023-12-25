#include<iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int array1[n], array2[m];

    for (int i = 0; i < n; i++) {
        cin >> array1[i];
    }

    for (int i = 0; i < m; i++) {
        cin >> array2[i];
    }


    int j = 0;
    for (int i = 0; i < n; i++) {
        if (array1[i] == array2[j]) {
            j++;
            if (j == m) {
                cout << "YES";
                return 0;
            }
        }
    }

    cout << "NO";
    return 0;
}