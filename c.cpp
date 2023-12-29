#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;

    if(x.size()==1)
    {
        int num = stoi(x);
        if(num%4==0)cout << "Yes";
        else cout << "No";
    }
    else
    {
        int n = x.size();
        int num = (x[n-1]-'0') + (x[n-2]-'0')*10;
        if(num%4==0)cout << "Yes";
        else cout << "No";
    }

    return 0;
}
