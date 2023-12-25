#include<iostream>
using namespace std;

int main()
{
    int c,a,b,sum=0,temp;
    cin>>c>>a>>b;
    if(b>a){
        temp=a;
        a=b;
        b=temp;
    }
    
    for (int i = 1; i <=c; i++)
    {
        int sum1=0,d=i;
        while(d!=0){
            sum1=sum1+d%10;
            d=d/10;
        }
       
        if(sum1>=b&&sum1<=a){
            sum=sum+i;
        }
        
    }
    cout<<sum;
    return 0;
} // namespace std;
