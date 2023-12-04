#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m, z;
    cin >> n >> m >> z;

    int r = (z-1)/m+1;
    int c = (z-1)%m+1;

    int ans = (c-1)*n + r;

    cout << ans;
    return 0;
}
