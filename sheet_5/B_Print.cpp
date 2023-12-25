#include<iostream>
using namespace std;
void print(int a){
    for (int i = 1; i < a; i++)
    {
        cout<<i<<" ";
    }
    cout<<a;
}
int main(){
    int a;
    cin>>a;
    print(a);
    return 0;
}