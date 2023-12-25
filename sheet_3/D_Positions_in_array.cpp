#include<iostream>
using namespace std;
int main(){
    long long n,arr[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]<=10){
            cout<<"A["<<i<<"] = "<<arr[i]<<"\n";
        }
    }
    return 0;
}