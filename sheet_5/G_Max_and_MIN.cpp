#include<iostream>
using namespace std;
void MinMaxArray(int arr[], int n){
    int min=arr[0],max=0;
    for (int i = 0; i < n; i++)
    {
        if(min>arr[i]){
            min=arr[i];
        }
        if (max<arr[i])
        {
           max=arr[i];
        }
    }
    cout<<min<<" "<<max;
}
void Funtionality(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];    
    }
    MinMaxArray(arr,n);
   
}
int main(){
    Funtionality();
}