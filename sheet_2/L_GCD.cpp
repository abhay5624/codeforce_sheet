#include<iostream>
using namespace std;
int main()
{
    int a,b,c,max;
    cin>>a>>b;
    c=b;
    if(a<b){
        c=a;
    }
    for(int i=1;i<=c;i++){
        if(a%i==0 && b%i==0){
            max=i;
        }
    }     
 cout<<max;
    
} // namespace std;
