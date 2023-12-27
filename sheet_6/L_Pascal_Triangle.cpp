#include<iostream>
using namespace std;
int rowPrint(int n){
    int pro = 1;
    cout<<"1";
for (int i = 1; i < n; i++)
{
    pro=(pro*(n-i))/i;
    cout<<" "<<pro;
}

}
int main(){
int a;
cin>>a;
for (int i = 1; i <=a; i++)
{
    rowPrint(i);
    cout<<endl;
}

}
