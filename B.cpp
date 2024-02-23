#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;

    int cnt = 0;
    for(int i=0; i<x.size(); i++)
    {
        if(x[i]=='.' && (i==0 || x[i-1]=='.') && (i==x.size()-1 || x[i+1]=='.'))
        {
            cout << i << endl;
            cnt++;
        }
    }

    cout << cnt ;

    return 0;
}
