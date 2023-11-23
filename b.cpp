#include <bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x;
    int cntp = 0, cnte = 0, cntn = 0;
    for(int i=0; i<x.size(); i++)
    {
        if(x[i]=='P')cntp++;
        else if(x[i]=='E')cnte++;
        else if(x[i]=='N')cntn++;
    }
    cout << min(cntp, min(cnte, cntn)) << endl;
    return 0;
}
