#include<iostream>
using namespace std;
void void_Print(int n){
    if(n>1){
        cout<<n<<" ";
        void_Print(n-1);
    }else if(n==1){
          cout<<n;
    }
}
int main(){
   int n;
   cin>>n;
   void_Print(n);
}
