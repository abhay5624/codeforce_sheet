#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore(); 
    
    while (n > 0) {
        string s;
        getline(cin, s);

        if (s.length() <= 10) {
            cout << s << endl;
        } else {
            int size = s.length() - 2; 
            cout << s[0] << size << s.back() << endl;
        }
        
        n--;
    }   

    return 0;
}

