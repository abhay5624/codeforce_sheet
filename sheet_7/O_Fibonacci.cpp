#include<iostream>
using namespace std;
int fun(int n){
    if(n==1){
        return 0;
    }if(n==2){
        return 1;
    }else{
        return fun(n-1)+fun(n-2);
    }
}
int main(){
int n;
cin>>n;
int k=fun(n);
cout<<k;
}
