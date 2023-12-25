#include<iostream>
using namespace std;
void printEvenIndex(int arr[],int n){
    if(n==0){
         cout<<arr[n];
    }
    else{
        cout<<arr[n]<<" ";
        printEvenIndex(arr,n-2);
    }
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i = 0; i < n; i++)
{
    cin>>arr[i];
}
if((n-1)%2==0){
printEvenIndex(arr,n-1);
}else{
 printEvenIndex(arr,n-2);   
}

}
