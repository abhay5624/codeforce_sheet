#include <iostream>
#include <cctype>  
using namespace std;

int countWords(string s) {
    int count=0;
    bool isword = false;
    for(char ch : s){
        if(isalpha(ch)){
            if(!isword){
                count++;
                isword=true;
            }
        }else{
            isword=false;
        }
    }
    return count;
}

int main() {
    string s;
    getline(cin, s);
    int result = countWords(s);
    cout << result << endl;
    return 0;
}
