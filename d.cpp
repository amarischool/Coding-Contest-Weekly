#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x, y;
    cin >> x >> y;

    bool b;

    for(int i=0; i<=x.size()-y.size(); i++)
    {
        b = true;
        for(int j=0; j<y.size(); j++)
        {
            if(x[i+j]!=y[j])
            {
                b = false;
                break;
            }
        }
        if(b)
        {
            break;
        }
    }

    if(b) cout << "YES";
    else cout << "NO";

    return 0;
}
