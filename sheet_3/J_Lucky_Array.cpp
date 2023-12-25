#include<iostream>
using namespace std;
int main(){
    long long n,arr[1000],min=100000,count=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(min>arr[i]){
            min=arr[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if(min==arr[i]){
            count++;
        }
    }
    if(count%2==0){
        cout<<"Unlucky";
    }else{
        cout<<"Lucky";
    }
    
}