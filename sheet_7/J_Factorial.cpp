#include<iostream>
using namespace std;
long long factorial(int n){
    if(n==1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
int main(){
int n;
cin>>n;
long long fac=factorial(n);
cout<<fac;
}
