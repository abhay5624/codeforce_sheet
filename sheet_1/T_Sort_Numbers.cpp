#include<iostream>
using namespace std;
int main(){
    int arr[3],temp;
    cin>>arr[0]>>arr[1]>>arr[2];
    if(arr[0]<=arr[1] && arr[0]<=arr[2]){
        cout<<arr[0];
        if(arr[1]<arr[2]){
            cout<<"\n"<<arr[1]<<"\n"<<arr[2];
        }else{
             cout<<"\n"<<arr[2]<<"\n"<<arr[1];
        }
    
    }else if(arr[1]<=arr[0] && arr[1]<=arr[2])
    {
        cout<<arr[1];
        if(arr[0]<arr[2]){
            cout<<"\n"<<arr[0]<<"\n"<<arr[2];
        }else{
        cout<<"\n"<<arr[2]<<"\n"<<arr[0];
        } 
    }else if(arr[2]<=arr[0] && arr[2]<arr[1])
    {
        cout<<arr[2];
        if(arr[0]<arr[1]){
            cout<<"\n"<<arr[0]<<"\n"<<arr[1];
        }else{
        cout<<"\n"<<arr[1]<<"\n"<<arr[0];
        } 
    }
  cout<<"\n\n"<<arr[0]<<"\n"<<arr[1]<<"\n"<<arr[2];
    return 0;
}