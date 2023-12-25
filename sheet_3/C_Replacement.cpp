#include<iostream>
using namespace std;
int main(){
    long long n,arr[100000];
    
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]>0){
            arr[i]=1;
        }else if(arr[i]<0){
            arr[i]=2;
        }
        cout<<arr[i]<<" ";
    }
}