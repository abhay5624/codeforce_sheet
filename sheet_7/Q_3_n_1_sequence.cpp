#include<bits/stdc++.h>
using namespace std;
int Print_3_n_1(int n,int count){
    if(n!=1){
    if((n/2)*2==n){
        n=n/2;
     }else{
        n=3*n+1;
     }
    Print_3_n_1(n,++count);
    }else 
    {
     return count;   
    }
    
}
int main(){
int n;
cin>>n;
cout<<Print_3_n_1(n,1);
return 0;
}
