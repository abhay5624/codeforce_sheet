#include<iostream>
using namespace std;

int main()
{
    int c;
    cin>>c;
    while(c!=0){
        int a,b,temp,sum=0;
        cin>>a>>b;
        if(a>b){
           temp=a;
           a=b;
           b=temp; 
        }
        for (int i = a+1; i <b; i++)
            {
                if(i%2!=0){
                    sum=sum+i;
                }                       
            }
            cout<<sum;
            cout<<endl;
        c--;
    }
   return 0;
  
    
} // namespace std;
