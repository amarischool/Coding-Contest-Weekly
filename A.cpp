#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;
    bool b = true;
    for(int i=2; i<x.size(); i++)
    {
        if(x[i]==x[i-1] && x[i]==x[i-2])
        {
            b = false;
            break;
        }
    }
    if(b) cout << "Yes";
    else cout << "No";

    return 0;
}
