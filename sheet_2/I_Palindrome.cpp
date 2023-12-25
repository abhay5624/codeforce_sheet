#include<iostream>
using namespace std;
int main()
{
    int a,j,res=0,rem;
    cin>>a;
    j=a;
    while(j!=0)
    {
        rem=j%10;
        res=rem+res*10;
        j=j/10;
    }
    cout<<res;
    if(res==a){
        cout<<"\n"<<"YES";
    }else{
        cout<<"\n"<<"NO";
    }
} // namespace std;
