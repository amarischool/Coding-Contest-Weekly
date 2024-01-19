#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    int k;
    cin >> x >> k;
    k = k%x.size();
    for(int i=k; i<x.size(); i++)
    {
        cout << x[i];
    }
    for(int i=0; i<k; i++)
    {
        cout << x[i];
    }
    return 0;
}
