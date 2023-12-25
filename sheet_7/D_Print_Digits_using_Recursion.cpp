#include<iostream>
using namespace std;
void printOne(int n){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    if(n>1){
       printOne(n-1); 
    }
}
int main(){
    int n;
    cin>>n;
    printOne(n);
}
