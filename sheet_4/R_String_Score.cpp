#include <iostream>
using namespace std;

int main() {
    string str;
    int n, score = 0;
    cin >> n >> str;

    for (int i = 0; i < n; i++) {
        switch (str[i]) {
            case 'V':
                score += 5;
                break;
            case 'W':
                score += 2;
                break;
            case 'X':
                i++;
                break;
            case 'Y':
                str += str[i + 1];
                n++;
                i++;
                break;
            case 'Z':
                if (str[i + 1] == 'V') {
                    score = score / 5;
                    i++;
                } else if (str[i + 1] == 'W') {
                    score = score / 2;
                    i++;
                }
                break;
             
        }
    }

    cout << score << endl;

    return 0;
}
