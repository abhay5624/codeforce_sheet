#include<iostream>
using namespace std;
void functanality(){
    int n;
    cin>>n;
    int arr1[n],arr2[n],arr3[2*n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>arr2[i];
    }
    for (int i = 0; i < n; i++)
    {
        arr3[i]=arr2[i];
        cout<<arr3[i]<<" ";
    }
    for (int i = 0; i < n; i++)
    {
        arr3[n+i-1]=arr1[i];
        cout<<arr3[n+i-1]<<" ";
    }
    
    
    
}
int main(){
    functanality();
}