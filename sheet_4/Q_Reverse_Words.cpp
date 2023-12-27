#include<bits/stdc++.h>
using namespace std;
void ReverseString(vector <string> s){
for(int i=0;i<s.size();i++){
    reverse(s[i].begin(),s[i].end());
    if(i!=(s.size()-1)){
    cout<<s[i]<<" ";
    }else{
    cout<<s[i];
    }
}
}
int main(){
string s;
getline(cin,s);
vector<string> words;
int length =0,index=0;
for(int i=0;i<s.length();i++){
    if(s[i]==' '){
        words.push_back(s.substr(index,length));
        index=i+1;
        length=0;
    }else{
        length++;
    }
}
words.push_back(s.substr(index,length));
ReverseString(words);
}
