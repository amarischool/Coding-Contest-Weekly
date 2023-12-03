#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int a[n], m=0, s=0;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        s += a[i];
        if(m < a[i]) m = a[i];
    }
    int z = n*m;

    cout << z-s;
    return 0;
}
