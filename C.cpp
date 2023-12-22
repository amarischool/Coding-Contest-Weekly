#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    char c;
    cin >> x >> c;

    int diff = c-x[0];

    for(int i=0; i<x.size(); i++)
    {
        x[i] = x[i]+diff;
        if(x[i]<'a') x[i]+=26;
        else if(x[i]>'z') x[i]-=26;
    }

    cout << x << endl;

    return 0;
}
