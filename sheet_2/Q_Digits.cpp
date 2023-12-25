#include<iostream>
using namespace std;
int main()
{
    int a;
    long long arr[10000];
    cin>>a;
    if(a==0){
        cout<<0;
    }
    for (int i = 0; i < a; i++)
    {
        cin>>arr[i];
        if(arr[i]==0){
            cout<<0;
        }else{
        long long k =arr[i];
        while(k!=0)
        {
            cout<<k%10<<" ";
            k=k/10;
        }
        }
        cout<<endl;
    }
}  
