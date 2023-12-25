#include<iostream>
using namespace std;
int main(){
    int a,j=1;
    cin>>a;
    for(int i=1;i<=a;i++){
        if(i%2==0){
cout<<i<<"\n";
j=0;
        }
        
    }
    if(j==1){
        cout<<"-1";
    }
    return 0;
}