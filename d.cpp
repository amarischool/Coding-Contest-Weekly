#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;

    vector <string> v(x.size());

    int it = 0;

    for(int i=0; i<x.size(); i++)
    {
        if(x[i]!='-')v[it]=v[it]+x[i];
        else it++;
    }
    for(int i=0; i<v.size(); i++)
    {
        if(!v[i].empty())
        {
            cout << v[i].size() << ':' << v[i] << endl;
        }
    }
}
