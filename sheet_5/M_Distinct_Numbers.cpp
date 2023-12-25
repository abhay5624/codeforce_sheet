#include<iostream>
using namespace std;
void functionality(){
    int n,count=0;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
    bool isUnique = true;
       for (int j = i+1; j < n; j++)
       {
             if(arr[i]==arr[j]){
                 isUnique=false;
                break;
            }
       }
        if(isUnique){count++;}
    }
    
    cout<<count;
}
int main(){
    functionality();
}