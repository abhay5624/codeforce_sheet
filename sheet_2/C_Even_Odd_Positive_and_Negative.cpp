#include <iostream>
using namespace std;
int main()
{
    int a, arr[1000], pos = 0, neg = 0, even = 0, odd = 0, zero;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
        if (arr[i] > 0)
        {
            pos++;
        }
        else
        {
            if (arr[i] < 0)
                neg++;
        }
    }
cout << "Even: " << even << "\n"
     << "Odd: " << odd << "\n"
     << "Positive: " << pos << "\n"
     << "Negative: " << neg;
return 0;
}