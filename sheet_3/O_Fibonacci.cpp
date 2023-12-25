#include<iostream>
using namespace std;
void fibno(int n){
if(n==1){
    cout<<"0";
}else if(n==2){
    cout<<"1";
}else{
    long long a=0,b=1,temp;
    for (int i = 0; i < n-2; i++)
    {
       temp=a+b;
       a=b;
       b=temp;
    }
    cout<<b;
}
}
int main(){
    int n;
    cin>>n;
    fibno(n);
}
