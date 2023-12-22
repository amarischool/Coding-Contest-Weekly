#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;

    bool b = true;

    for(int i=0; i<x.size(); i++)
    {
        int pos = i+1;
        int num = x[i]-'0';

        if(pos%2 == num%2)
        {
            b = false;
            break;
        }
    }

    if(b) cout << "Yes";
    else cout << "No";

    return 0;
}
