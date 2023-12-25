#include<iostream>
using namespace std;
int checkPrime(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {  
        int a;
        bool flag=true;
        cin>>a;
        for (int i = 2; i < a; i++)
        {
            if(a%2==0)
            {
                flag = false;
            }
        }
       if(flag){
        cout<<"YES\n";
       }else{
        cout<<"NO\n";
       }
    }
    }


int main(){
    checkPrime();
    return 0;
}