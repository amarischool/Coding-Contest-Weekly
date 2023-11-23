#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c;
    cin >> a >> b;

    int cr = 0, d;
    for(int i=1; i<=a.size()||i<=b.size(); i++)
    {
        d = 0;
        if(i<=a.size()) d += a[a.size()-i] - '0';
        if(i<=b.size()) d += b[b.size()-i] - '0';
        d += cr;
        c = to_string(d%10) + c;
        cr = d/10;
    }
    if(cr) c = to_string(cr) + c;
    cout << c << endl;

    return 0;
}
