#include<bits/stdc++.h>
using namespace std;
int main(){
string s;
cin>>s;
int i=0;
while(s[i]!='\0'){
    if(s[i]=='E'){
         string word = s.substr(i,5);
        if(word=="EGYPT"){
             s.replace(i,5," ");
        }
    }
    i++;
}
cout<<s;
}
