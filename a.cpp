#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int m, k, x;
        cin >> m >> k >> x;
        if(k>=x) cout << x << endl;
        else cout << (x%k) << endl;
    }
    return 0;
}
