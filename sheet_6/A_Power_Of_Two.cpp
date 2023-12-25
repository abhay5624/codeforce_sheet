#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long n,k=2;
    cin>>n;
    while(k<n){
        k=k*2;
    }if(n==1){
        cout<<"YES";
    }
    else if(k==n){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}