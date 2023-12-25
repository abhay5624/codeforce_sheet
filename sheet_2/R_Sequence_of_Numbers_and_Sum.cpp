#include<iostream>
using namespace std;

int main()
{
    
    while (1)
    {
        int a,b,sum=0,temp;
        cin>>a>>b;
        if(a<=0 || b<=0){
            return 0;
        }
        if(a>b){
           temp=a;
           a=b;
           b=temp; 
        }
        for (int i = a; i <=b; i++)
            {
                sum=sum+i;
                cout<<i<<" ";
            }
            cout<<"sum ="<<sum;
            cout<<endl;
    }
    return 0;
  
    
} // namespace std;
