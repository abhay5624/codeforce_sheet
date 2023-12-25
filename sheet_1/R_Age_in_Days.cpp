#include<iostream>
using namespace std;
int main()
{
    int a,remain;
    cin>>a;
    cout<<a/365<<" years\n";
    remain = a%365;
    cout<<remain/30<<" months\n";
    remain=remain%30;
    cout<<remain<<" days\n";
    return 0;
} // namespace std;

