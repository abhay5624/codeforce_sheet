#include<iostream>
using namespace std;
long long combination(int n,int r){
    if(r>0){
        return (n/(n-r))*combination(n-1,r-1);
    }if(r==0){
        return 1;
    }
}
int main(){
int n,r;
cin>>n>>r;
long long answer =combination(n,r);
cout<<answer;
}
