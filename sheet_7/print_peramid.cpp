#include<bits/stdc++.h>
using namespace std;
int main(){
int n,pro=1;
cin>>n;
cout<<"1 ";
for(int i=1;i<n;i++){
    pro=(pro*(n-i))/i;
    cout<<pro<<" ";
}
}
