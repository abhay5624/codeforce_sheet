#include<iostream>
using namespace std;
int main(){
long long a,count=0;
cin>>a;
    while(a%2==0){
    a=a/2;
    count++;
    }
    if(count!=0){
        cout<<"(2^"<<count<<")*";
        count=0;
    }
    for (int i = 3; i <= a; i+=2)
    {
        while(a%i==0){
            a=a/i;
            count++;
        }
        if(count!=0){
            cout<<"("<<i<<"^"<<count<<")";
            if(a!=1){
                cout<<"*";
            }
            count=0;
        }
    }
    
}
