#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y, k;
    cin >> x >> y >> k;

    int total = x*k - 2*y*(k-1);

    cout << total;

    return 0;
}
