#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x, y, k;
        cin >> x >> y >> k;

        if(x>=y)cout << x << endl;
        else
        {
            int xt=0;
            if(y-x>k)
            {
                xt = y-x-k;
            }
            cout << y+xt << endl;
        }
    }

    return 0;
}
