#include<iostream>
using namespace std;
int main(){
    int n,m,X;
    long long arr[200][200];
    bool found=false;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cin>>arr[i][j];
        }
    }
    cin>>X;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
          if(X==arr[i][j]){
            found=true;
          }
        }
    }
    if(found){
        cout<<"will not take number";
    }else{
        cout<<"will take number";
    }
    return 0;
}