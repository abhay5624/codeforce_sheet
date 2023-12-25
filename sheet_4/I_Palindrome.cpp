#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    bool isPalindrome = true;
    int size = s.length()-1;
    for (int i = 0; i < size; i++)
    {
       if(s[i]!=s[size-i]){
            isPalindrome= false;
       }
    }
    if(isPalindrome){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
}