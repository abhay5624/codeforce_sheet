#include<iostream>
using namespace std;
  void sort_array(int *arr, int n){
    int i,j;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
        
    }
  }
int main(){
    int n;
    cin>>n;
    bool isSame=true;
    int array1[n],array2[n];
    for (int i = 0; i < n; i++)
    {
       cin>>array1[i];
    } 
    for (int i = 0; i < n; i++)
    {
       cin>>array2[i];
    }
    sort_array(array1,n);
    sort_array(array2,n);
   for (int i = 0; i < n; i++)
    {
       if(array1[i]!=array2[i]){
            cout<<"no";
            return 0;
       }
    }
    cout<<"yes";
}