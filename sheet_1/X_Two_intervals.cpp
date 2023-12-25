#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int l1,r1,l2,r2,l,r;
    cin>>l1>>r1>>l2>>r2;
    //check which interval is greater
    //if 1st is greater 
    if((r1<l2 && r1<r2) || (r2<l1&&r2<r1)){
           cout<<"-1";
           
       }else{
        l=max(l1,l2);
        r=min(r1,r2);
      cout<<l<<" "<<r;
       }
      

    return 0;
}