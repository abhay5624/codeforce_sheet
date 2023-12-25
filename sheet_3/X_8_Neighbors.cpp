#include<iostream>
using namespace std;
bool isInside(int x,int y,int n,int m){
    bool isValid=true;
    if(x<0||y<0){
        isValid=false;
    }else if(x>n||y>m){
        isValid=false;
    }
    return isValid;
}
int main(){
    int n,m,x,y;
    cin>>n>>m;
    char array[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>array[i][j];
        }
        
    }
    cin>>x>>y;
    x--;
    y--;
    bool isValid = true;
    for (int i = -1; i < 2; i++)
    {
        for (int j = -1; j < 2; j++)
        {
            if (i!=0&&j!=0)
            {
                if(isInside(x+i,y+j,n,m)&&array[x+i][y+j]!='x'){
                    isValid=false;
                }
            }
            
        }
    }
    isValid?cout<<"yes":cout<<"no";
    return 0;
}