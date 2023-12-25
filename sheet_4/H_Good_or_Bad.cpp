#include <iostream>
using namespace std;
void checkString()
{
    string s;
    cin>>s;
    int i = 0;
    while (i != s.length()-2)
    {
        if (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')
        {
            cout << "Good"<<endl;
            return;
        }
        if (s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0')
        {
            cout << "Good"<<endl;
            return;
        }
        i++;
    }
    cout << "Bad"<<endl;
}
int main()
{
    int n;
    cin >> n;
    while (n > 0)
    {
        checkString();
        n--;
    }
}