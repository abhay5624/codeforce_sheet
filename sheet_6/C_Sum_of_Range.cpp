#include<iostream>
using namespace std;
int main(){
    long long a,b;
    cin>>a>>b;
    long long sum=0,sumEven=0,sumOdd=0;
    if (a>b)
    {
        int temp=a;
        a=b;
        b=temp;
    }
    for (int i = a; i <= b; i++)
    {
        sum=sum+i;
        if(i%2==0){
            sumEven=sumEven+i;
        }else {
            sumOdd=sumOdd+i;
        }
    }
    cout<<sum<<"\n"<<sumEven<<"\n"<<sumOdd;
    return 0;
}
