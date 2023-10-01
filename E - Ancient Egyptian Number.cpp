#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t, n;
    cin >> t;

    while(t--)
    {
        cin >> n;

        string res;
        if(n==0) res = "0";
        else while(n)
        {
            res = to_string(n%6)+res;
            n/=6;
        }

        cout << res << endl;
    }

    return 0;
}
