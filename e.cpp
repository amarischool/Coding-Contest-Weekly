#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, p, q;
    string x, y;
    cin >> x >> y;

    m = x[0] - '0';
    n = x[2] - '0';

    p = y[0] - '0';
    q = y[2] - '0';

    int r, i;
    r = m*p - n*q;
    i = m*q + n*p;

    cout << r << "+" << i << "i";

    return 0;
}
