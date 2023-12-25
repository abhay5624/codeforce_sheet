#include<iostream>
#include<math.h>
using namespace std;
void Equation(int a,int n){
    long long sum=0;
    for (int i = 2; i <= n; i=i+2)
    {   
        sum = sum+pow(a,i)+1;
    }
    cout<<sum;
}
int main(){
    int a,n;
    cin>>a>>n;
    Equation(a,n);
    return 0;
}