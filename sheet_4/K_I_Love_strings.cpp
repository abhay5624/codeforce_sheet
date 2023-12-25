#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n)
    {
        string a,b;
        int large;
        cin>>a>>b;
        if(a.length()>b.length()){
            large=a.length();
        }else{
            large=b.length();
        }
        for (int i = 0; i < large; i++)
        {
            if(!a[i]){
                cout<<b[i];
            }else if(!b[i]){
                cout<<a[i];
            }else{
                cout<<a[i]<<b[i];
            }        
        }
        cout<<endl;
        
        n--;
    }
    
}