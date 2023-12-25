#include<iostream>
using namespace std;
bool palindrome(int n){
    int originalNum = n;
    int reversedNum = 0;

    while (n > 0) {
        reversedNum = reversedNum * 10 + n % 10;
        n /= 10;
    }

    return originalNum == reversedNum;
}
int Division(int number){
    int count=0;
    for (int i = 2; i < number; i++)
    {
        if(number%i==0){
            count++;
        }
    }
    return count;
}
void MaxDivision(int *arr,int n){
    int noDiv = 0,k;
    for (int i = 0; i < n; i++)
    {
        int Div = Division(arr[i]);
        if(Div>noDiv){
            noDiv = Div;
            k=arr[i];
        }if(Div==noDiv){
            if(k<arr[i]){
                k=arr[i];
            }
        }
    }
    cout<<"The number that has the maximum number of divisors : "<<k;
}
void MaxMinArr(int *arr,int n){
    int max = 0,min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if(max<arr[i]){
            max=arr[i];
        }
        if(min>arr[i]){
            min=arr[i];
        }
    }
    cout<<"The maximum number : "<<max<<"\n";
    cout<<"The minimum number : "<<min<<"\n";
}
void countPrime(int *arr,int n){
    int count=0;
    for (int j = 0; j < n; j++)
    {
        int flag = true;
        for (int i = 2; i < arr[j]; i++)
        {
            if(arr[j]%i==0){
                flag = false;
            }
        }
        if(arr[j]==1){
                flag=false;
            }
        if(flag){
            count++;
        }
    }
    cout<<"The number of prime numbers : "<<count<<"\n";
}
void countPalindrome(int *arr,int n){
    int count=0;
    for (int i = 0; i < n; i++)
    {
        if(palindrome(arr[i]))
        {
        count++;
        }
    }
    cout<<"The number of palindrome numbers : "<<count<<"\n";
}
void functionality(){
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    MaxMinArr(arr,n);
    countPrime(arr,n);
    countPalindrome(arr,n);
    MaxDivision(arr,n);
}
int main(){
    functionality();
}