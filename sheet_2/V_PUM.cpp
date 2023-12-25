#include<iostream>
using namespace std;
int main()
{
    int a,b=1;
    cin>>a;
    for (int i = 0; i < a; i++)
    {
        cout<<b;
        ++b;
        cout<<" "<<b<<" ";
        cout<<++b<<" PUM"<<"\n";
        b=b+2;
    }
    return 0;
    
} // namespace std;

