#include<bits/stdc++.h>
using namespace std;

void Print_rows(int n, int row_no, int spaces) {
    if (row_no <= (n - 1)) {
        for (int i = 0; i < n-row_no-1; i++) {
            cout << " ";
        }
        for (int i = 0; i < 2 * row_no + 1; i++) {
            cout << "*";
        }
        cout << endl;
        Print_rows(n, row_no + 1, spaces - 1);
    }
}

int main() {
    int n;
    cin >> n;
    Print_rows(n, 0, n - 1);
    return 0;
}
