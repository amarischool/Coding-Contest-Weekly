#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    while(n--)
    {
        string x;
        cin >> x;
        for(int i=0; i<x.size(); i++)
        {
            if(x[i]=='1') cout << '0';
            else cout << '1';
        }
        cout << endl;
    }

    return 0;
}
