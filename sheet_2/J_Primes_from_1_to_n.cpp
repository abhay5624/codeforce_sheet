#include<iostream>
using namespace std;
int isPrime(int a){
    int j=0;
    for(int i=2;i<a;i++){
        if(a%i==0){
            j=1;
        }
    }     
  return j;  
}
int main()
{
   int a;
   cin>>a;
   for (int i = 2; i <= a; i++)
   {
    int j = isPrime(i);
   // cout<<"value oj for "<<i<<" is "<<j;
    if(j==0){
        cout<<i<<" ";
    }
   }
   
    
} // namespace std;
