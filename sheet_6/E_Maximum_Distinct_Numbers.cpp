#include<iostream>
using namespace std;
int main(){
    long long n,sum=0;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
       sum=sum+i;
       if(sum>n){
        cout<<i-1<<"\n";
        break;
       }else if(sum==n){
        cout<<i<<"\n";
        break;
       }
    }
    
}