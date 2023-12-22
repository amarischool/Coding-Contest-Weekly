#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x, y;
    cin >> x >> y;

    int vx = 0, vy = 0;

    bool z = true;

    for(int i=0; i<x.size(); i++)
    {
        if(x[i]!='z')z=false;
        vx += x[i]-'a'+1;
        vy += y[i]-'a'+1;
    }

    if(vy>vx) cout << 0;
    else if(z) cout << -1;
    else
    {
        sort(y.begin(), y.end());
        int cnt = 0;
        for(int i=0; i<y.size(); i++)
        {
            vy += 'z' - y[i];
            cnt ++;
            if(vy>vx) break;
        }
        cout << cnt;
    }

    return 0;
}
