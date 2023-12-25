#include<iostream>
using namespace std;
int main()
{
    int a,j=0;
    cin>>a;
    for(int i=2;i<a;i++){
        if(a%i==0){
            j=1;
        }
    }     
    if(j==0){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
    
} // namespace std;
