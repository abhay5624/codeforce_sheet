#include<iostream>
using namespace std;
int main(){
    int n;
    long long arr[100][100],dia1=0,dia2=0;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
            if(i==j){
                dia1=dia1+arr[i][j];
            }
            if(i+j==n-1){
                dia2=dia2+arr[i][j];
            }
        }
    }
    long long diff = dia1-dia2;
    if(diff<0){
        diff=-diff;
    } 
    cout<<diff;
}

