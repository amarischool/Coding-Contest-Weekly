#include<bits/stdc++.h>
using namespace std;
int main()
{
    int up, down, now, next;
    cin >> up >> down >> now >> next;

    if(next>now)
    {
        if(next-now <= up) cout << "Stairs";
        else cout << "Elevator";
    }
    else
    {
        if(now-next <= down) cout << "Stairs";
        else cout << "Elevator";
    }

    return 0;
}
