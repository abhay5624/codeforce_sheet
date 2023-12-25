#include<iostream>
#include<math.h>
using namespace std;
int toBinary(int a){
    int binary=0,k=a,i=0,no=0;
    while(k!=0){
       if(k%2==1){
            binary++;
       }
        k=k/2;
    }
    while(binary!=0){
        no=no+pow(2,i);
        binary--;
        i++;
    }
    cout<<no<<"\n";
    return binary;
}
int main()
{
    int n,arr[11];
    cin>>n;
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
    {
       int t=toBinary(arr[i]);
    }

} // namespace std;

