#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a, b, c;
    cin >> a >> b;

    char carry = '0';

    for(int i=7; i>=0; i--)
    {
        int cnt=0;
        if(a[i]=='1')cnt++;
        if(b[i]=='1')cnt++;
        if(carry=='1')cnt++;

        if(cnt%2 == 0)
        {
            c = "1" + c;
        }
        else
        {
            c = "0" + c;
        }

        if(cnt > 1) carry = '1';
        else carry = '0';
    }

    cout << c;

    return 0;
}
