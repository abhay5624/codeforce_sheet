#include<iostream>

using namespace std;
int main()
{
    char s;
    cin>>s;
    int i =s;
    if(i>=65&&i<=90){
       cout<<"ALPHA\nIS CAPITAL";
    }else if(i>=97&&i<=122){
      cout<<"ALPHA\nIS SMALL";
    }else{
        cout<<"IS DIGIT";
    }
    //cout<<i;
    return 0;
    
} 