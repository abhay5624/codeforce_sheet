#include<iostream>
using namespace std;

void functionality(){
    int n,x,y,temp;
    cin>>n>>x>>y;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>arr[i][j];
        }
    }
   
    for (int j = 0; j < n; j++)
    {
        swap(arr[x-1][j],arr[y-1][j]);
    }
    for (int j = 0; j < n; j++)
    {
        swap(arr[j][x-1],arr[j][y-1]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
   //swapping

}
int main(){
    functionality();
    return 0;
}