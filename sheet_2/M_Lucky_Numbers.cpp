#include<iostream>
using namespace std;
int isLuck(int j){
      int k=0;
        while(j!=0){
            int m = j%10;
            if(m != 4 && m!= 7){
                k=1;
            }
            j=j/10;
        }
        return k;
}
int main()
{
    int a,b,h=0;
    cin>>a>>b;
   
    for(int i=a;i<=b;i++){
       int k = isLuck(i);
        if(k==0){
            cout<<i<<" ";
            h=1;
        }
    }     
  if(h==0){
    cout<<"-1";
  }
    
} // namespace std;
