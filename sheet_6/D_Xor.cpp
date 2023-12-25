#include<iostream>
using namespace std;
 
int main() {
    long long a, b;
    long long q;
    cin >> a >> b >> q;
    q=q%3;
    if(q==1){
        cout<<a;
    }else if(q==2){
        cout<<b;
    }else{
        cout<<(a^b);
    } 
    return 0;
}
