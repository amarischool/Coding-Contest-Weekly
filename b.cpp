#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x;

    bool b = true;

    for(int i=0; i<x.size(); i++)
    {
        if(x[i]!='1' && x[i]!='0')
        {
            b = false;
        }
    }

    if(b) cout << "Yes";
    else cout << "No";

    return 0;
}
