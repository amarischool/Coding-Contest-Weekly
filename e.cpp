#include<bits/stdc++.h>
using namespace std;
int main()
{
    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double d1 = sqrt(x1*x1 + y1*y1);
    double d2 = sqrt(x2*x2 + y2*y2);

    if(d1 > d2) swap(d1, d2);

    int ans = ceil(d1);

    if(ans > d1 && ans < d2)
    {
        cout << ans;
    }
    else
    {
        ans ++;
        if(ans < d2)
        {
            cout << ans;
        }
        else
        {
            cout << -1;
        }
    }
    return 0;
}
