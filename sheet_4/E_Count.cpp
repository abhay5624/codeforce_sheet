#include<iostream>
#include<string.h>
using namespace std;
int main(){
    string s;
    int sum =0,i=0;
    getline(cin,s);
    while(s[i]!='\0'){
        int digit = s[i]-'0';
        sum=sum+digit;
        i++;
    }
    cout<<sum;
}