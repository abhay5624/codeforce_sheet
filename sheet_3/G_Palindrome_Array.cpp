#include<iostream>
using namespace std;
int main(){
    long long n,arr[100000],rev[100000];
    bool p=true;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        rev[n-i-1]=arr[i];
    }
    
    
  for(int i=0;i<n;i++){
        if(arr[i]!=rev[i]){
            p=false;
        }
    }
    if(p==false){
        cout<<"NO";
    }else{
        cout<<"YES";
    }
    return 0;
}