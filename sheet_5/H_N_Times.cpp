#include<iostream>
using namespace std;
void PrintN(){
    int n;
    char c;
    cin>>n>>c;
    for (int i = 0; i < n; i++)
    {
        cout<<c<<" ";
    }
    cout<<"\n";
}
void functionality(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       PrintN();
    }
    
}
int main(){
    functionality();
}