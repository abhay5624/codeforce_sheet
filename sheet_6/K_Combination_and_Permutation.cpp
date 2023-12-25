#include<iostream>
using namespace std;
long long factorial(int n){
    if(n==0){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}
void permutation(int n,int r){
     cout<<factorial(n)/(factorial(r)*factorial(n-r))<<" ";
}
void combination(int n,int r){
     cout<<factorial(n)/(factorial(n-r));
}
int main(){
int n, p;
cin>>n>>p;
permutation(n,p);
combination(n,p);
}
