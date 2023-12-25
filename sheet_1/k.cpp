#include<iostream>

using namespace std;
int main()
{
    long long arr[3];
   
  for(int i=0;i<3;i++){
cin>>arr[i];
}
 int min=arr[0],max=arr[0];
for(int i=0;i<3;i++){
if(max<arr[i]){
max = arr[i];
}
if(min>arr[i]){
    min=arr[i];
}
}
cout<<min<<" "<<max;
   return 0;
    
} 