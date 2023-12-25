
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    for(long long i=0;i<n;i++)
    {
        long long m;
        cin>>m;
        long long A[m];
        for(long long j=0;j<m;j++)
        {
            cin>>A[j];
        }
        for(long long j=0;j<m;j++)
        {
           for(long long k=j;k<m;k++)
           {
            long long a=A[j];
               for(long long l=j;l<=k;l++)
               {
                    if(A[l]>a) 
                    {
                        a=A[l];
                    } 
               }
                cout<<a<<" ";
           }
        }
        cout<<endl;
    }
    return 0;
}