#include<iostream>
#include <iomanip>
using namespace std;
int main()
{
    float a, remain;
    cin>>a;
    int b=a;
    remain = a-b;
    if(remain==0){
        cout<<"int "<<b;
    }else{
        cout <<fixed <<setprecision(3)<<"float "<<b<<" "<<remain;
    }
    return 0;
} // namespace std;

