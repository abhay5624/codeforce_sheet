#include<bits/stdc++.h>
using namespace std;
int main(){
    int x1, y1, x2, y2,x3,y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double long m = (y2 - y1) / (x2 - x1);
    if((x3-x1) == m*(y3-y1)){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
