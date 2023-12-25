#include<iostream>
#include <iomanip>
using namespace std;
void average(){
    int n;
    cin>>n;
    double arr[n];
    long double sum =0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum=sum+arr[i];
    }
    long double avg=sum/n;
    cout<<fixed <<setprecision(7)<<avg;
    //avg=avg+sum%n;
}
int main(){
   average(); 
   return 0;
}