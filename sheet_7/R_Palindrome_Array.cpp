#include<iostream>
using namespace std;
bool reverse(long long arr[],int n,int i){
    if(i==n/2){
        if(arr[i]!=arr[n-i]){
            return false;
        }
        
        return true;
    }
    else{
        if(arr[i]!=arr[n-i]){
            return false;
        }else{
            reverse(arr,n,++i);
        }
    }
}
int main(){
int n;
cin>>n;
long long arr[n];
for(int i = 0; i < n; i++)
{
    cin>>arr[i];
}
bool isPAlindrone = reverse(arr,n-1,0);
if(isPAlindrone){
    cout<<"YES";
}else{
    cout<<"NO";
}
}
