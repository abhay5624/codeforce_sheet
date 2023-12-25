#include<iostream>
#include<math.h>
using namespace std;
int findLogn(int n,int i){
    if(n==pow(2,i)){
        return i;
    }else{
        return findLogn(n,i+1);
    }
}
int main(){
    int n,logn;
    cin>>n;
    logn=findLogn(n,0);
    cout<<logn;
}
