#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    long double a,b;
    cin>>a>>b;
    float c;
    c=a/b;
    cout<<c<<endl;
   cout<<"floor "<<a<<"/ "<<b<<" = "<<floor(c)<<endl;
   cout<<"ceil "<<a<<"/ "<<b<<" = "<<ceil(c)<<endl;
   cout<<"round "<<a<<"/ "<<b<<" = "<<round(c);

    return 0;

} 