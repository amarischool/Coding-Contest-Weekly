#include<bits/stdc++.h>
using namespace std;

bool x(const pair<int, int> &a, const pair<int, int> &b)
{
    if(a.first>b.first) return true;
    else if(a.first<b.first) return false;
    else if(a.second<b.second)return true;
    else return false;
}

int main()
{
    int n;
    cin >> n;
    int a[n], b[n];

    vector<pair<int,int>>v;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
        cin >> b[i];
        int con = a[i]+b[i];
        v.push_back(make_pair(con, i+1));
    }

    sort(v.begin(), v.end(), x);

    for(int i=0; i<v.size(); i++)
    {
        cout << v[i].second << ' ';
    }

    return 0;
}
