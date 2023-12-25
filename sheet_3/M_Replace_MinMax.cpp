#include<iostream>
using namespace std;
 // namespace std;
int main(){
int n,arr[10000],min=100000,max=0,ind_min,ind_max;
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]>max){
        max=arr[i];
        ind_max=i;
    }
    if(arr[i]<min){
        min=arr[i];
        ind_min=i;
    }
}
arr[ind_max]=min;
arr[ind_min]=max;
for(int i=0;i<n;i++){
   cout<<arr[i]<<" ";
}
}