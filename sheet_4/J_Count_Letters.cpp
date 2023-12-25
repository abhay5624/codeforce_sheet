#include<iostream>
using namespace std;
int main(){
    string s;
    int arr[100]={0};
    int i=0;
    cin>>s;
    while(s[i]!='\0'){
        int digit=s[i]-'a'+1;
        arr[digit]++;
        i++;
    }
    for (int j = 1; j <27; j++)
    {
        char letter = 'a'+j-1;
        if(arr[j]!=0){
            cout<<letter<<" : "<<arr[j]<<endl;
        }
        
    }
    
}