#include <iostream>
using namespace std;

bool binarySearch(int A[], int N, int X) {
    int left = 0, right = N - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (A[mid] == X) {
            return true;
        } else if (A[mid] < X) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return false;
}

int main() {
    int N, Q;
    cin >> N >> Q;

    // Read the sorted array A
    int A[N];
    for (int i = 0; i < N; ++i) {
        cin >> A[i];
    }

    // Process the queries using binary search
    for (int i = 0; i < Q; ++i) {
        int X;
        cin >> X;
        if (binarySearch(A, N, X)) {
            cout << "found\n";
        } else {
            cout << "not found\n";
        }
    }

    return 0;
}
