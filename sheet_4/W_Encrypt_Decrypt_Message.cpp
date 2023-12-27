#include<iostream>
using namespace std;
int main(){
int q;
string original="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
string key="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
string word;
cin>>q;
if(q==1){
    //encryption
    cin>>word;
    for (char &ch : word) {
            if (islower(ch)) {
                int index = ch - 'a';
                ch = key[index];
            } else if (isupper(ch)) {
                int index = ch - 'A' + 26;
                ch = key[index];
            } else if (isdigit(ch)) {
                int index = ch - '0' + 62;
                ch = key[index];
            }
        }
}else{
    
    cin>>word;
     for (char &ch : word) {
                int index = key.find(ch);
                ch = original[index];
        }
}
cout<<word;
}
