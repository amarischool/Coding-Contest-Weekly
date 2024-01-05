#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x, y, z;
    cin >> x >> y >> z;
    int a = 0, b = 0, pa=0, pb=0;

    for(int i=0; i<x.size(); i++)
    {
        if(x[i]=='A')a++;
        else b++;
    }

    if(a>b)pa++;
    else pb++;

    a=0;
    b=0;

    for(int i=0; i<y.size(); i++)
    {
        if(y[i]=='A')a++;
        else b++;
    }

    if(a>b)pa++;
    else pb++;

    a=0;
    b=0;

    for(int i=0; i<z.size(); i++)
    {
        if(z[i]=='A')a++;
        else b++;
    }

    if(a>b)pa++;
    else pb++;

    if(pa>pb) cout << 'A';
    else cout << 'B';

    return 0;
}
