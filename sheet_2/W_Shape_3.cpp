#include<iostream>
using namespace std;

int main()
{
    int c;
    cin>>c;
    for (int i = 0; i < c; i++)
    {
        for(int j = 0;j<c-i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<<"*";
        }for(int j=0;j<i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for (int i = 0; i < c; i++)
    {
        for(int j = 0;j<=i-1;j++){
            cout<<" ";
        }
        for(int j=0;j<c-i;j++){
            cout<<"*";
        }for(int j=0;j<c-i-1;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
   return 0;
  
    
} // namespace std;
