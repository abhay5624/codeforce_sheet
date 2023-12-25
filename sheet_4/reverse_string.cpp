#include<iostream>
using namespace std;
int main(){
    string str;
    int a,b;
    cin>>a>>b>>str;
    for(int i = 0; i <= (b-a)/2; i++)
    {
        swap(str[a+i-1],str[b-i-1]);             
    }
    cout<<str;
}
