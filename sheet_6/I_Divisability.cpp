#include<iostream>
using namespace std;
int main(){
    int a,b,x;
    long long sum=0;
    cin>>a>>b>>x;
    for (int i = 0; i*x <= b; i++)
    {
        if(i*x>=a){
            sum =sum+i*x;
        }
    }
    cout<<sum;
}