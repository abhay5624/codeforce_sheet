#include<iostream>
using namespace std;
void Smallest_Pair(){
    int size,min=0;
    cin>>size;
    long long arr[size];
    for (int i = 0; i < size; i++)
    {  
            cin>>arr[i];   
    }
    min=arr[0] + arr[1] + 1;
    for (int j = 0; j < size-1; j++)
    {
        for (int i = j+1; i < size; i++)
        {
            if(arr[j]+arr[i]+i-j<min){
                min=arr[j]+arr[i]+i-j;
            }
        }
            
    }
    cout<<min<<"\n";
}
int main()
{
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
            Smallest_Pair();
    }
 
    
} // namespace std;


           