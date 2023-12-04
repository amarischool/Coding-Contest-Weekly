#include<bits/stdc++.h>
using namespace std;

long long lcm(int a, int b)
{
    return a*b/__gcd(a,b);
}

int main()
{
    int n;
    cin >> n;
    int a[n], ans = 1;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        ans = lcm(ans, a[i]);
    }
    cout << ans;
    return 0;
}
