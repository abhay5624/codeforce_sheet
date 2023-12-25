#include<iostream>
using namespace std;
void fact(long long a){
    long long fa=1;
    for (int i = a; i >0; i--)
    {
        fa=fa*i;
    }
    cout<<fa<<"\n";
}
int main()
{
    long long a,arr[100];
    cin>>a;
    for(int i=0;i<a;i++){
        cin>>arr[i];
    }
     for(int i=0;i<a;i++){
        fact(arr[i]);
    }
     
    
} // namespace std;
