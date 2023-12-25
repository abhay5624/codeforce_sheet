#include<iostream>
#include <sstream>
#include<math.h>
using namespace std;
int main(){
    string n;
    long long x,sum=0;
    int j = 10;
    cin>>n>>x;
    stringstream s(n); 
    for (int i = 0; i <n.length(); i++)
    {
        sum=sum+(n[i]*pow(10,i)%x)
    }   
}
