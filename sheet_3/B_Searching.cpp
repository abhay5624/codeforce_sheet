#include<iostream>
using namespace std;
int main(){
    long long n,arr[100000],k;
    bool p=false;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>k;
    
  for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout<<i;
            p=true;
            return 0;
        }
    }
    if(p==false){
        cout<<"-1";
    }
    return 0;
}