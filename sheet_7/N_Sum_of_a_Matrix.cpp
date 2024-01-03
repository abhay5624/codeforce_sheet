#include<bits/stdc++.h>
using namespace std;
int n, m;
void PrintSummerisation(int arr1[][m],int arr2[][m],int i,int j){
if(i<m && j<m){
    cout << arr1[i][j] + << arr2[i][j]<<" ";
    PrintSummerisation(arr1,arr2,i+1,j+1)
}
}
int main(){
    cin >> n >> m;
    int arr1[n][m], arr2[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr2[i][j];
        }
    }
    
    return 0;
}
