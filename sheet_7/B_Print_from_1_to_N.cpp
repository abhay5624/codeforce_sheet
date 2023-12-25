#include<iostream>
using namespace std;
void void_Print(int n){
    static int i=1;
    if((i) <= n){
        cout<<i<<endl;
        i++;
        void_Print(n);
    }
}
int main(){
int n;
cin>>n;
void_Print(n);
}
