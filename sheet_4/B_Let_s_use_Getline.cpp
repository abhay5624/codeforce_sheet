#include<iostream>
#include  <string.h>
using namespace std;
int main(){
    int i=0;
    string a;
    getline(cin,a);
    while(a[i]!='\\'){
        cout<<a[i];
        i++;
    }
}