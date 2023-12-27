#include<iostream>
using namespace std;
long long NCR (int n, int r)
{
    if (r==0)
    {
       return 1;
    }else{
        return (n*NCR(n-1,r-1))/r;
    }
    
}
int main(){
int n,r;
cin>>n>>r;
long long answer =NCR(n,r);
cout<<answer;
}
