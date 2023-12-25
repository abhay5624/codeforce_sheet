#include<iostream>
using namespace std;
int main(){
    string a,b,temp;
    getline(cin,a);
    getline(cin,b);
 
    for (int i = 0; i < a.length(); i++)
    {
        if(a[i]<b[i]){
            cout<<a;
            return 0;
        }else if(a[i]>b[i]){
            cout<<b;
            return 0;
        }
    }
    if (a.length()>b.length())
    {
        cout<<b;
    }else{
        cout<<a;
    }
    
    
}