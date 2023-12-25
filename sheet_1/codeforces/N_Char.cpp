#include<iostream>

using namespace std;
int main()
{
    char s;
    cin>>s;
    int i =s;
     if(i>=65&&i<=90){
          s=s+32;
    cout<<s;
    }else if(i>=97&&i<=122){
       s=s-32;
    cout<<s;
    }
    return 0;
    
} 