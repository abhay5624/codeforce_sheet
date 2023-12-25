#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    long int arr[4],p=1,l,m;
    cin>>arr[0]>>arr[1]>>arr[2]>>arr[3];
   for(int i=0;i<4;i++){
    int l,m;
    l=arr[i]%10;
    arr[i]=arr[i]/10;
    m=arr[i]%10;
    arr[i]=m*10+l;
   }
    for(int i=0;i<4;i++){
   p=p*arr[i];
   }
    l=p%10;
    p=p/10;
    m=p%10;
    cout<<m<<l;
    return 0;
}