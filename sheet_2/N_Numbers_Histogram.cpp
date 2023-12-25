#include<iostream>
using namespace std;
void printpatern(int n,char c){
    for (int i = 0; i < n; i++)
    {
       cout<<c;
    }
    cout<<endl;
}
int main()
{
    int a,h[50];
    char b;
    cin>>b>>a;
    for (int i = 0; i < a; i++)
    {
        cin>>h[i];
    }
     for (int i = 0; i < a; i++)
    {
      printpatern(h[i],b);
    }
   
  
    
} // namespace std;
