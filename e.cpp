#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;

    int l=0, r=0;

    for(int i=0; i<x.size(); i++)
    {
        if(x[i]=='L')l++;
        else r++;
    }

    bool lft = false, rt = false;

    if(l>r)lft = true;
    else rt = true;

    if(lft)
    {
        int rtn = l-r;
        rtn %= 4;
        if(rtn == 0)cout << "North";
        else if(rtn == 1)cout << "West";
        else if(rtn == 2)cout << "South";
        else cout << "East";
    }
    else
    {
        int rtn = r-l;
        rtn %= 4;
        if(rtn == 0)cout << "North";
        else if(rtn == 1)cout << "East";
        else if(rtn == 2)cout << "South";
        else cout << "West";
    }

    return 0;
}
