#include<iostream>

using namespace std;
int main()
{
    long long a,b;
    cin>>a;
    while(a!=0){
        b=a%10;
        a=a/10;
    }
    if(b%2==0){
        cout<<"EVEN";
    }else{
        cout<<"ODD";
    }
    return 0;
    
} 