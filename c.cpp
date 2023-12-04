#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cin >> x;
    int h = stoi(x.substr(0,2));

    if (h == 0)
    {
        cout << "12" << x.substr(2, 3);
    }
    else if (h > 12)
    {
        cout << setw(2) << setfill('0') << h - 12 << x.substr(2, 3);
    }
    else
    {
        cout << setw(2) << setfill('0') << x.substr(0, 2) << x.substr(2, 3);
    }

    return 0;
}
