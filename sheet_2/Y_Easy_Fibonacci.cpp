#include<iostream>
using namespace std;
int main()
{
    long long n,a=0,b=1;
    cin>>n;
    //cout<<a<<" "<<b<<" ";
    if(n==1){
        cout<<a;
    }else if(n==2){
        cout<<a<<" "<<b<<" ";
    }
    else{
        cout<<a<<" "<<b<<" ";
        for (int i = 0; i < n-2; i++)
        {
            long long temp;
            cout<<a+b<<" ";
            temp=b;
            b=a+b;
            a=temp;
        }
    }
    return 0;

} // namespace std;

