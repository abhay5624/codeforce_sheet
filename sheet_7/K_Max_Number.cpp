#include<iostream>
using namespace std;
int MaxNumber(int arr[],int n,int max){
    if(n==0){
       if(arr[n]>max){
         max=arr[n];
         
       }return max;
    }
    else if(arr[n]>max){
        max=arr[n];
        return MaxNumber(arr,n-1,max);
    }else{
     return MaxNumber(arr,n-1,max);   
    }
}
int main(){
int n;
cin>>n;
int arr[n];
for (int i = 0; i < n; i++)
{
    cin>>arr[i];
}
int max=MaxNumber(arr,n-1,-INT32_MAX);
cout<<max;
}
