#include <iostream>
using namespace std;
int main() {
int n;
long long arr[100000];
cin>>n;
long long sum=0;
for(int i=0;i<n;i++)
{
    cin>>arr[i];
    sum=sum+arr[i];
}
if (sum<0)
{
    sum=-sum;
}

cout<<sum<<endl;
return 0;
}