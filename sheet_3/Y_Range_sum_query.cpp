#include<iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    long long arr[x];
    long long prearr[x+1];
    prearr[0] ={0};
    for (int i = 0; i < x; i++)
    {
        cin>>arr[i];
        prearr[i+1]=prearr[i]+arr[i];
    }
     /*  for (int i = 0; i < x+1; i++)
    {
        cout<<prearr[i]<<" ";
       // prearr[i+1]=prearr[i]+arr[i];
    }*/

    for (int j = 0; j < y; j++)
    {
        int a,b;
        cin>>a>>b;
        cout<<prearr[b]-prearr[a-1]<<endl;
    }
}

