#include<iostream>
using namespace std;
int main(){
    long long n,arr[100000],k,index=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
    k=arr[0];
  for(int i=0;i<n;i++){
       if(arr[i]<k){
        k=arr[i];
        index=i;
       }
    }
   cout<<k<<" "<<index+1;
    return 0;
}