#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x;

    int rpt = 0;

    for(int i=1; i<x.size(); i++)
    {
        if(x[i]==x[i-1]) rpt ++;
    }

    cout << rpt;

    return 0;
}
