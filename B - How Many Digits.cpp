#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sq = n*n;
    int digit = 0;
    while(sq)
    {
        digit++;
        sq/=10;
    }
    cout << digit << endl;
    return 0;
}
