#include<iostream>
using namespace std;
int main()
{
    float a,b;
    cin>>a>>b;
    if(a>0 && b>0){
        cout<<"Q1";
    }else if(a<0 && b<0){
        cout<<"Q3";
    }else if(a==0){
        cout<<"Eixo X";
        }else if(b==0){
        cout<<"Eixo Y";
        }else {
        if(a>0 && b<0){
            cout<<"Q4";
        }else{
            cout<<"Q2";
        }
    }
    
} // namespace std;
