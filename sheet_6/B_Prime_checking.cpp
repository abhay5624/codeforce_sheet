#include<iostream>
#include<math.h>
using namespace std;
int main(){
    long long n;
    bool flag=true;
    cin>>n;
    
    for (int i = 3; i <=  sqrt(n); i++)
    {
        if(n%i==0){
            flag=false;
        }
    }
    if(n==1){
         cout<<"NO";
    }
    else if(flag){
        cout<<"YES";
    }else{
        cout<<"NO";
    }
}