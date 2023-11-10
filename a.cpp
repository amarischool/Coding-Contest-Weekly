#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string a, x[n];
    int p1=0, p=0, pmx=0;

    cin >> a;
    for(int i=0; i<a.size(); i++)
    {
        if(a[i]<='9' && a[i]>'0')p1+=a[i]-'0';
    }

    for(int i=0; i<n; i++)
    {
        cin >> x[i];
        p = 0;
        for(int j=0; j<x[i].size(); j++)
        {
            if(x[i][j]<='9' && x[i][j]>'0')p+=x[i][j]-'0';
        }
        pmx = max(pmx, p);
    }

    if(p1>pmx)cout<<"I am Happy"<<endl;
    else cout<<"I am Sad"<<endl;

    return 0;
}
