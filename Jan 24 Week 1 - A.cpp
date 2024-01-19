#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string x;
        cin >> x;
        int st = 0, en = x.size() - 1;
        bool b = true;
        while(st < en)
        {
            if(x[st]!=x[en])
            {
                b = false;
                break;
            }
            st++;
            en--;
        }
        if(b) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}
