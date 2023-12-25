#include<iostream>
using namespace std;

int main(){
    int n,arr[300],count=0;
    bool alleven=true;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    while(alleven){
        for (int i = 0; i < n; i++)
        {
            if(arr[i]%2!=0){
                alleven=false;
            }
        }
        if(alleven){
            count++;
            for (int i = 0; i < n; i++)
            {
                arr[i]=arr[i]/2;
            }
        }
    }
cout<<count;
}