#include<bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    cin >> x;

    bool b = false;

    if(x.size()==1)
    {
        int num = stoi(x);
        if(num%4==0)b = true;
    }
    else
    {
        int n = x.size();
        int num = (x[n-1]-'0') + (x[n-2]-'0')*10;
        if(num%4==0)b = true;
    }

    if(b)
    {
        string ans;
        int r = 0;
        for(int i=0; i<x.size(); i++)
        {
            int num = r*10 + x[i]-'0';
            if(num/4==0)
            {
                if(ans.size()>0)
                {
                    ans += to_string(num/4);
                }
            }
            else
            {
                ans += to_string(num/4);
            }
            r = num%4;
        }
        cout << ans << endl;
    }
    else
    {
        cout << -1 << endl;
    }

    return 0;
}
