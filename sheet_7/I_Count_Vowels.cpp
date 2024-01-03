#include<iostream>
using namespace std;
int count=0;
void countVowel(string s, int n) {
    if(s[n]!='\0')
    {
        char ch= tolower(s[n]);
        if(ch=='a'|| ch=='e' || ch=='i' || ch=='o' || ch=='u'){
            count++;
        }
        countVowel(s,n+1);
    }
}

int main() {
    string s;
    getline(cin,s);
    countVowel(s, 0);
    cout << count << endl;
    return 0;
}
