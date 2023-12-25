#include<iostream>
using namespace std;
int main()
{
    int a,b,e;
    char c,d;
    cin>>a>>c>>b>>d>>e;
    switch (c)
    {
    case '+':
        if(a+b==e){
            cout<<"Yes";
        }else{
            cout<<a+b;
        }
        break;
    case '-':
        if(a-b==e){
            cout<<"Yes";
        }else{
            cout<<a-b;
        }
        break;
    case '*':
        if(a*b==e){
            cout<<"Yes";
        }else{
            cout<<a*b;
        }
        break;
    case '/':
        if(a/b==e){
            cout<<"Yes";
        }else{
            cout<<a/b;
        }
        break;
    default:
        break;
    }
} // namespace std;
