#include<bits/stdc++.h>
using namespace std;

int lcm(int a, int b)
{
    return a*b/__gcd(a,b);
}

int main()
{
    int n;
    cin >> n;
    int a[n], l=1;
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        l = lcm(l, a[i]);
    }
    for(int i=0; i<n; i++)
    {
        if(a[i]==l)
        {
            cout << a[i];
            return 0;
        }
    }
    cout << -1;
    return 0;
}
