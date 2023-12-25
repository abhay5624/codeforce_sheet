#include<iostream>
using namespace std;
void Print(int n){
    if(n!=0){
        cout<<"I love Recursion\n";
        Print(n-1);
    }
}
int main(){
    int n;
    cin>>n;
    Print(n);
}